import re
import requests
import time

discuss_root_url="https://www.luogu.org/discuss/show/"
headers={
    "user-agent":"Mozilla/5.0 (Windows NT 6.1; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/63.0.3239.26 Safari/537.36 Core/1.63.6788.400 QQBrowser/10.3.2843.400"
}

# 下次起始ID：53833
print("请输入起始PID：",end="\n")
start_pid=int(input());
print("请输入截止PID：",end="\n")
stop_pid=int(input())+1;

## 刷新输出文件
ans_file=open("F:/洛谷全部讨论数据汇总.md","w",encoding="UTF-8")
ans_file.write("")
ans_file.close()

for i in range(start_pid,stop_pid):
    # 构造当前url
    dq_url=discuss_root_url+str(i)
    # 获取当前pid对应的讨论的页面
    while(1):
        try:
            dq_page=requests.get(dq_url,headers=headers,timeout=199)
        except:
            time.sleep(90)
            continue
        else:
            break
        pass
    pass
    # 获取当前pid对应的讨论的HTML
    dq_html=dq_page.text
    
    # 匹配uid的正则表达式模板
    uid_model=re.compile("楼主\<\/strong\>\<span class\=\"lg\-right\"\>\<a class\=\'.*\' href\=\"\/space\/show\?uid\=(.*)\" target\=\"\_blank\"\>")
    # 用模板提取HTML中的uid信息
    dq_author_uid=uid_model.findall(dq_html)
    #匹配讨论标题的正则表达式模板
    title=re.compile("\<h1\>(.*)\<\/h1\>")
    # 用模板提取HTML中的讨论标题
    dq_title=title.findall(dq_html)

    # 判断结果是否为空（为空说明当前pid的讨论不存在）
    if(len(dq_author_uid)==0):
        continue
    pass
    pass;print(i,end="\n")
    # 将当前pid对应讨论的楼主uid的变量类型转为int
    dq_author_uid=int(dq_author_uid[0])
    # 将当前pid对应讨论的标题的变量类型转为string
    dq_title=str(dq_title[0])
    
    # 打开输出文件
    while(1):
        try:
            ans_file=open("F:/洛谷全部讨论数据汇总.md","a",encoding="UTF-8")
        except:
            time.sleep(2)
            continue
        else:
            break
        pass
    pass
    # 将当前讨论信息格式化写入文件
    ans_file.write("帖子ID=\""+str(i)+"\";标题=\""+dq_title+"\";楼主ID=\""+str(dq_author_uid)+"\".\n")
    # 关闭输出文件占用
    ans_file.close()
pass