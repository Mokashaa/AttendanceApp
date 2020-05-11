#!/usr/bin/env python
# -*- coding: utf-8 -*-

from AttendanceSystem import add_to_database
import sys



img1 = sys.argv[1]
img2 = sys.argv[2]
img3 = sys.argv[3]
id = sys.argv[4]



add_to_database(img1,img2,img3,id)

