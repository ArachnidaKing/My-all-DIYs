// ==UserScript==
// @name         ������SCP�о�Ա�����
// @namespace    http://tampermonkey.net/
// @version      2.28
// @description  ������Ŀ������������ʶ��ʣ�ĵ�������������
// @author       ArachnidaKing
// @match        http://scp-wiki-cn.wikidot.com/*
// @grant        none
// ==/UserScript==

(function()
{
	'use strict';
	//
	const hacked=
	[
		"down",
		"no",
		"DOWN",
		"NO",
		"Down",
		"No"
	];
	var hacked_num=hacked.length;
	//
	var sec=document.getElementsByTagName("p");
	var sec_num=sec.length;
	var f;
	//
	for(let i=0;i<sec_num;++i)
	{
		f=0;
		for(let j=0;j<hacked_num;++j)
		{
			if(sec[i].innerHTML.indexOf(hacked[j])>=0)
			{
				f=1;
				break;
			}
		}
		if(f)
		{
			sec[i].style.display="none";
		}
	}
})();
