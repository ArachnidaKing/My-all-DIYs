// ==UserScript==
// @name         ����桤���ι���
// @namespace    http://tampermonkey.net/
// @version      1.67
// @description  ��������������Щ�㿴���ߵ��û�ԭ����ʧ��
// @author       ArachnidaKing
// @match        https://www.luogu.org/discuss/*
// @grant        none
// @require      https://cdn.staticfile.org/jquery/1.10.2/jquery.min.js
// ==/UserScript==

(function()
{
	'use strict';
	//
	var replys=document.getElementsByClassName("lg-content-left")[0].children;
	var reply_num=replys.length-1;
	//
	var request=new XMLHttpRequest();
	var dq_url,dq_html;
	initRequest();
	for(let i=0;i<reply_num;++i)
	{
		dq_url=document.getElementsByClassName("lg-left")[i].children[0].href;
		request.open("GET",dq_url,0);
		request.send();
		//
		if(dq_html.includes("ȡ������"))
		{
			replys[i].style.display="none";
		}
	}
	////
	function initRequest()
	{
		request.onreadystatechange=function()
		{
			if((request.readyState==4)&&(request.status==200))
			{
				dq_html=request.responseText;
			}
		}
	}
})();
