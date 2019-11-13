// ==UserScript==
// @name         低素质SCP研究员请滚蛋
// @namespace    http://tampermonkey.net/
// @version      1.15
// @description  屏蔽项目讨论中自我意识过剩的低素质讨论者们
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
