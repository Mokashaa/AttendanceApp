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

