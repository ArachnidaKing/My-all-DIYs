// ==UserScript==
// @name         ������SCP�о�Ա�����
// @namespace    http://tampermonkey.net/
// @version      1.15
// @description  ������Ŀ������������ʶ��ʣ�ĵ�������������
// @author       ArachnidaKing
// @match        http://scp-wiki-cn.wikidot.com/*
// @grant        none
// ==/UserScript==

(function()
{
	'use strict';
	//
	var sec=document.getElementsByTagName("p");
	var sec_num=sec.length;
	//
	for(let i=0;i<sec_num;++i)
	{
		if(sec[i].innerHTML.indexOf("down")>=0)
		{
			sec[i].style.display="none";
		}
		else if(sec[i].innerHTML.indexOf("no")>=0)
		{
			sec[i].style.display="none";
		}
	}
})();
