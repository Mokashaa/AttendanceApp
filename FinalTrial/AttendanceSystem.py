#!/usr/bin/env python
# -*- coding: utf-8 -*-
import cv2
import os
import numpy as np
import pandas as pd
import face_recognition


def add_to_database (img1,img2,img3,id):
    id = int(id)
    database = pd.read_csv('/home/okshh/AttendanceApp/database.csv',index_col=0)
    known_image = face_recognition.load_image_file(img1)
    encoding1 = face_recognition.face_encodings(known_image)[0]

    known_image = face_recognition.load_image_file(img2)
    encoding2 = face_recognition.face_encodings(known_image)[0]

    known_image = face_recognition.load_image_file(img3)
    encoding3 = face_recognition.face_encodings(known_image)[0]

    encoding=np.concatenate((encoding1,encoding2,encoding3) , axis=0)
    database.loc[id]=encoding
    database.to_csv('/home/okshh/AttendanceApp/database.csv')



def who_is_it(image_path,tutorial):
    image = face_recognition.load_image_file(image_path)
    image = enhance (image)
    face_locations = face_recognition.face_locations(image )
    database = pd.read_csv('/home/okshh/AttendanceApp/database.csv',index_col=0)
    attendanceSheet = pd.read_csv('/home/okshh/AttendanceApp/dofaasheet.csv',index_col=0)
    result = open ("/home/okshh/AttendanceApp/output.txt", "w+")
    counter = 0
    for (top,right,bottom,left) in face_locations:
        roi = image[ top:bottom ,left:right ]
        unknown_encoding = face_recognition.face_encodings(roi)
        if (len(unknown_encoding) == 0):
            counter+=1
            continue
        unknown_encoding = unknown_encoding[0]
        identity = 0
        min_dist = 100
        for id , db_enc in database.iterrows():
            dist1 = np.linalg.norm(db_enc[:128] - unknown_encoding)
            dist2 = np.linalg.norm(db_enc[128:256] - unknown_encoding)
            dist3 = np.linalg.norm(db_enc[256:] - unknown_encoding)
            dist_avg = min(dist1,dist2,dist3)
            if dist_avg < min_dist:
                min_dist = dist_avg
                identity = id

        if min_dist > 0.6:
            counter += 1
            cv2.rectangle(image, (left,top), (right,bottom), (0,0, 255), 1)
            cv2.putText(image, "N/A", (left, top), cv2.FONT_HERSHEY_DUPLEX, 0.7, (0,0 , 255), 1, cv2.LINE_AA)
        else:
            cv2.rectangle(image, (left,top), (right,bottom), (0, 255, 0), 1)
            cv2.putText(image, attendanceSheet['Name'][identity] , (left, top), cv2.FONT_HERSHEY_DUPLEX, 0.7, (0, 255, 0), 1, cv2.LINE_AA)
            attendanceSheet.loc[identity,tutorial]=1
            result.write(attendanceSheet['Name'][identity] +"\n")

    result.write("Found "+ str(counter)+ " people who are not in the database..")
    cv2.imwrite('/home/okshh/AttendanceApp/result.jpg', image)
    attendanceSheet.to_csv('/home/okshh/AttendanceApp/dofaasheet.csv')
    result.close()