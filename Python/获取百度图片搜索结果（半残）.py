import os
import re
import requests

baidu_image_url="http://image.baidu.com/search/index"
header={
    "User-Agent":"Opera/9.80 Windows NT 10.0; WOW64 AppleWebKit/537.36 KHTML, like Gecko Chrome/78.0.3887.94 Safari/537.36 OPR/46.0.2113.52",
    "Accept-Encoding":"gzip,deflate",
    "Connection":"Keep-Alive"
}
data={
    "tn":"baiduimage"
}
file_path="F:/其它/Arachnid's Pictures of "

# 获取搜索关键字
print("您的搜索关键字是：\n",end="")
search_key_word=input()
data["word"]=search_key_word
file_path+=search_key_word

# 获取各图片url
baidu_image_json=requests.get(baidu_image_url,headers=header,params=data)
main=baidu_image_json.text
image_url_model=re.compile("\"objURL\":\"(.*?)\"")
image_url=image_url_model.findall(main)

# 创建保存图片的目录
i=1
ls_file_path=file_path
while 1:
    if(os.path.exists(ls_file_path)):
        ls_file_path=file_path+"（"+str(i)+"）"
        i+=1
    else:
        os.mkdir(ls_file_path)
        file_path=ls_file_path
        break
    pass
pass

# 利用获取的url下载图片
i=1
for i_url in image_url:
    # pass;print(i_url)
    dq_picture=requests.get(i_url,timeout=10)
    file_path_name=file_path+"/"+search_key_word+"_"+str(i)+i_url[-4:];i+=1
    pass;print(file_path_name)
    picture=open(file_path_name,mode="wb")
    picture.write(dq_picture.content)
    picture.close()
pass