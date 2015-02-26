## Code Template Creator
## Devajit Asem
## python generate.py [-cpp/-py] [spoj/codechef/topcoder/tests] 

import subprocess, sys, os, time

files = {"-cpp":["template_get.cpp","template.cpp"],"-c":"template.c","-py":"template.py"}
params = sys.argv

print "***********************************@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*************************************"
print "\n\n\n\t\t\t\t TEMPLATE GENERATOR \n\t\t\t\t Devajit Asem\n\n\n"
print "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^################################"

if "-cpp" in params:
    print "Two templates available[1/2] : \n\t 1) template_get.cpp  ->  uses getchar_unlocked \n\t 2) template.cpp  ->  uses cstdio \nEnter option : ",
    option = int(raw_input())
    if option == 1 or option == 2:
        path = "templates/"+files.get(params[1])[option-1]
    else:
        print "Please provide correct options. Either 1 or 2."
else:
    path = "templates/"+files.get(params[1])

fname = raw_input("Enter Program Name : ")+"."+params[1].strip("-")

print path

if len(params) > 2:
    subprocess.call("cp "+path+" "+params[2]+"/"+fname,True)
    #os.chdir("test")
    os.system("gvim "+params[2]+"/"+fname)
else:
    subprocess.call("cp "+path+" "+fname,True)
    os.system("gvim "+fname)
print "File : ",fname, " created.........."

print time.ctime()
