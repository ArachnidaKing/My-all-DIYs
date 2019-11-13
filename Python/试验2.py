# import requests
import tkinter as tk
import json
import re
from urllib.request import urlopen
# -*- coding: UTF-8 -*-

def GetDict(date, keys, default=None):
    keys_list = keys.split('.')
    if isinstance(date,dict):
        dictionary = dict(date)
        for i in keys_list:
            try:
                if dictionary.get(i) != None:
                    dict_values = dictionary.get(i)
                elif dictionary.get(i) == None:
                    dict_values = dictionary.get(int(i))
            except:
                return default
            dictionary = dict_values
        return dictionary

Videojson = ""
def WebRequest(id):
    global Videojson
    # jsonData = requests.get("https://api.bilibili.com/x/article/archives?ids=" + video_id)
    Videojson = urlopen(
        "https://api.bilibili.com/x/article/archives?ids=" + id
    ).read().decode('utf-8')
    Data = json.loads(Videojson)
    return Data

window = tk.Tk()
window.title('哔哩哔哩数据查询')
window.geometry('485x475')

def insert_point():
    VideoId = ScanId.get()
    VideoData = WebRequest(VideoId)
    ViewTextWindow.delete(0.0, 'end')
    TitleTextWindow.delete(0.0, 'end')
    FavoriteTextWindow.delete(0.0, 'end')
    DanmuTextWindow.delete(0.0, 'end')
    ReplyTextWindow.delete(0.0, 'end')
    CoinTextWindow.delete(0.0, 'end')
    JsonTextWindow.delete(0.0, 'end')
    ViewTextWindow.insert('insert', str(GetDict(VideoData, "data."+VideoId+".stat.view")))
    TitleTextWindow.insert('insert', GetDict(VideoData, "data."+VideoId+".title"))
    FavoriteTextWindow.insert('insert', str(GetDict(VideoData, "data."+VideoId+".stat.favorite")))
    DanmuTextWindow.insert('insert', str(GetDict(VideoData, "data."+VideoId+".stat.danmaku")))
    ReplyTextWindow.insert('insert', str(GetDict(VideoData, "data."+VideoId+".stat.reply")))
    CoinTextWindow.insert('insert', str(GetDict(VideoData, "data."+VideoId+".stat.coin")))
    JsonTextWindow.insert('insert', Videojson)

tk.Label(window, text="输入视频AV号").place(x=350, y=10, anchor='nw')

ScanId = tk.Entry(window)
ScanId.place(x=320, y=45, anchor='nw')

query = tk.Button(window, text="查询", width=6, height=1, command=insert_point)
query.place(x=370, y=70, anchor='nw')

tk.Label(window, text="标题").place(x=10, y=10, anchor='nw')
TitleTextWindow = tk.Text(window,height=1,width=35)
TitleTextWindow.place(x=45, y=15, anchor='nw')

tk.Label(window, text="播放").place(x=10, y=40, anchor='nw')
ViewTextWindow = tk.Text(window,height=1,width=35)
ViewTextWindow.place(x=45, y=45, anchor='nw')

tk.Label(window, text="收藏").place(x=10, y=70, anchor='nw')
FavoriteTextWindow = tk.Text(window,height=1,width=35)
FavoriteTextWindow.place(x=45, y=75, anchor='nw')

tk.Label(window, text="弹幕").place(x=10, y=100, anchor='nw')
DanmuTextWindow = tk.Text(window,height=1,width=35)
DanmuTextWindow.place(x=45, y=105, anchor='nw')

tk.Label(window, text="回复").place(x=10, y=130, anchor='nw')
ReplyTextWindow = tk.Text(window,height=1,width=35)
ReplyTextWindow.place(x=45, y=135, anchor='nw')

tk.Label(window, text="硬币").place(x=10, y=160, anchor='nw')
CoinTextWindow = tk.Text(window,height=1,width=35)
CoinTextWindow.place(x=45, y=165, anchor='nw')

tk.Label(window, text="json").place(x=10, y=190, anchor='nw')
JsonTextWindow = tk.Text(window,height=20,width=60)
JsonTextWindow.place(x=45, y=195, anchor='nw')

window.mainloop()