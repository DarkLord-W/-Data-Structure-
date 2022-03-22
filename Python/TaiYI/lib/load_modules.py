# -*- coding:utf-8 -*-

import os,sqlite3

current_path   = os.path.dirname(__file__) #定位位置
project_path   = current_path.replace('lib','') 
dirs           = os.listdir(project_path+'/modules/') 
db_path        = project_path+"taiyi.db"

conn           = sqlite3.connect(db_path)
cursor         = conn.cursor()#创建游标

for dir in dirs: 
    sql        = "CREATE TABLE IF NOT EXISTS {}(id INTEGER PRIMARY KEY,name TEXT)".format(dir)
    cursor.execute(sql)

conn.commit()
conn.close()
