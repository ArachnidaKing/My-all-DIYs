// ==UserScript==
// @name		 新·真·洛谷屏蔽功能
// @version	     1.42
// @namespace	 http://tampermonkey.net/
// @description  让贫克兔、难稀鱼、岑泽之流的**不再脏你的眼
// @author	     ArachnidaKing
// @match		 https://www.luogu.org/discuss/*
// @grant		 none
// ==/UserScript==

(function()
{
	'use strict';
	//
	var makeGetCommands=(toGetUrl,completedTodo,elementTodo)=>
	{
		let dq_request=new window.XMLHttpRequest();
		dq_request.open("GET",toGetUrl,1);
		dq_request.onreadystatechange=()=>
		{
			if((dq_request.readyState===4)&&(dq_request.status===200))
			{
				completedTodo(dq_request.responseText,elementTodo);
			}
		}
		dq_request.send();
	}
	//
	var ifGiveBigCleanForLajis=(lawForJudgement,elementToJudge)=>
	{
		let pre_p=lawForJudgement.search("JSON.parse\(.*?(?=\);)");
		let nxt_p=lawForJudgement.search("(?<=JSON.parse\().*?(?=\);)");
		let key=lawForJudgement.substr(pre_p,nxt_p-pre_p);
		let judgementResult=(window.eval(key).currentData.user.userRelationship==2);
		// 
		if(judgementResult==1)
		{
			elementToJudge.parentNode.removeChild(elementToJudge);
		}
	}
	////
	var urlElements=document.querySelectorAll("a[class=center]");
	//
	var urlElement_num=urlElements.length;
	let dq_element;
	for(let i=0;i<urlElement_num;++i)
	{
		dq_element=urlElements[i];
		while((dq_element.parentNode.className!="lg-content-table-left")&&(dq_element.parentNode.className!="lg-content-left"))
		{
			dq_element=dq_element.parentNode;
		}
		//
		makeGetCommands(urlElements[i].href,ifGiveBigCleanForLajis,dq_element);
	}
})();
