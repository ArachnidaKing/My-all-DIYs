// ==UserScript==
// @name         ���ǰ�˴�����
// @namespace    http://tampermonkey.net/
// @version      3.43
// @description  �����¼�Զ���ת���ɰ�ҳ�棬�������ǰ�˿������ȥ��ȥ��
// @author       ArachnidaKing
// @match        https://www.luogu.org/record/*
// @match        https://www.luogu.org/recordnew/show/*
// @encoding     utf-8
// @grant        none
// ==/UserScript==

(function()
{
    'use strict';
    //
    const old_pre_url="https://www.luogu.org/recordnew/show/"
	//
	if(location.href.indexOf("recordnew/show/")>=0)
	{
//			console.log("�ѽ����°�ҳ��");
		editForSpiders();
		return;
	}
    //
    var dq_url=location.href;
    var dq_pid=dq_url.substring(29);
    if(!allNum(dq_pid))
    {
//    		console.log("�ɰ��б�ҳ��");
	}
    else
    {
//    		console.log("�ɰ������¼ҳ��");
    	var to_url=old_pre_url+dq_pid;
    	window.location.replace(to_url);
	}
    //
    function editForSpiders()
    {
    	const new_sign="�����¼���ҳ�滶ӭһ��������Ϊ������������������ǻ���һ�������ģ�һ���ܹ�������������ʶ�ʹ�õ����档�����ٷ���������ȡ�κ����ݵ����档�������������ԭ�ģ��������Ӫ��ǰ��һ���ʺȥ�ˡ�";
		var goalSignElements=document.getElementsByTagName("p");
		var goal_num=goalSignElements.length;
		var goalSignElement;
		for(let i=0;i<goal_num;++i)
		{
			if(goalSignElements[i].parentNode.id=="app-old")
			{
				goalSignElement=goalSignElements[i];
				break;
			}
		}
		goalSignElement.innerHTML=new_sign;
	}
    //
    function allNum(s)
    {
    	var f=1,siz=s.length;
    	//
    	for(let i=0;i<siz;++i)
    	{
    		if(isNaN(s[i]))
    		{
    			f=0;
    			break;
			}
		}
		//
		if(f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
})();
