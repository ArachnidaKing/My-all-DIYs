import re
import requests

ybt_findlog_url="http://ybt.ssoier.cn:8088/status.php"
data={
    "showname":"SpiderKing",
    "showres":"Accepted",
    "showlang":"1",
    "start":"0"
}

AC_pid=[]
while 1:
    ara=requests.get(ybt_findlog_url,params=data)
    data["start"]=int(data["start"])+20
    model=re.compile("href=problem_show\.php\?pid=(\d+)")
    ls_AC_pid=model.findall(ara.text)
    AC_pid+=ls_AC_pid
    if ls_AC_pid==[]:
        break
AC_len=len(AC_pid)
for i in range(AC_len):
    print(AC_pid[AC_len-i-1],end="\n")