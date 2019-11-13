import requests
import re

discuss_url="https://www.luogu.org/discuss/lists"
data={
    "forumname":"relevantaffairs"
}
header={
    "user-agent":"Mozilla/5.0 (Windows NT 6.1; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/63.0.3239.26 Safari/537.36 Core/1.63.6788.400 QQBrowser/10.3.2843.400"
}

pre_endid=open("F:/其它/洛谷灌水区看帖截止pid.txt",mode="r+")
endid=pre_endid.read()
pre_endid.close()

# 预设空变量
f=0
postid=[]
title=[]
reply_num=[]

i=0
while(1):
    i+=1

    # 获取新页面HTML
    data["page"]=str(i)
    Page=requests.get(discuss_url,headers=header,params=data)
    main=Page.text

    # 获取帖子id
    postid_model=re.compile("\/discuss\/show\?postid=(.*)\"\>")
    ls_postid=postid_model.findall(main)
    postid+=ls_postid

    # 获取帖子标题
    title_model=re.compile("\<a data-pjax href=\"\/discuss\/show\?postid=.*\"\>(.*)\<\/a\>")
    title+=title_model.findall(main)

    # 获取帖子回复数
    reply_num_model=re.compile("\<span class=\"lg-small\"\>(.*)个回复\<\/span\>")
    reply_num+=reply_num_model.findall(main)

    # 检查上次是否阅读至此页
    for j in range(1,20):
        if(int(ls_postid[j])<=int(endid)):
            f=1
            break
        pass
    pass
    if(f):
        break
    pass
pass

# 输出结果至文件
ans_file=open("F:/洛谷灌水区新帖.md","w",encoding="utf-8")
ans=""
i=0
while(1):
    i+=1
    if(int(postid[i])<=int(endid)):
        break
    pass
    ans+=("##### ["+title[i]+"](https://www.luogu.org/discuss/show/"+postid[i]+")，"+reply_num[i]+"个回复  \n")
pass
ans_file.write(ans)
ans_file.close()

# 更新看帖截止pid
pre_endid=open("F:/其它/洛谷灌水区看帖截止pid.txt",mode="w+")
pre_endid.write(str(postid[1])+"\n")
pre_endid.close()