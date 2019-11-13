// ==UserScript==
// @name         新·洛谷真·屏蔽功能
// @namespace    http://tampermonkey.net/
// @version      0.43
// @description  For new discuss-pages
// @author       ArachnidaKing
// @match        https://www.luogu.org/discuss/show/*
// @grant        none
// ==/UserScript==

(function()
{
	'use strict';
	//
	var discusses=document.getElementsByClassName("lg-content-left")[0].children;
	var discuss_num=discusses.length-2;
	var headPicture_num=document.getElementsByClassName("lg-left").length;
	//
	var urls=[];
	var url_num=headPicture_num;
	for(let i=0;i<url_num;++i)
	{
		urls.push(document.getElementsByClassName("lg-left")[i].children[0].href);
	}
		console.log(urls);
	//
	var requests=[];
	for(let i=0;i<url_num;++i)
	{
//			console.log(urls[i]);
		//
		work(urls[i],i);
	}
	////
	function work(dq_url,rank)
	{
		var ls_request=new XMLHttpRequest();
		requests[rank]=ls_request;
		//
		requests[rank].onreadystatechange=function()
		{
			if((requests[rank].readyState==4)&&(requests[rank].status==200))
			{
					console.log("|---")
//					console.log("请求完成。")
//					console.log(dq_url);
					console.log(requests[rank].dq_url);
					console.log(requests[rank].responseText);
					console.log("---|");
			}
		}
		//
		requests[rank].dq_url=dq_url;
//			console.log(requests[rank].dq_url);
		requests[rank].rank=rank;
		requests[rank].open("GET",requests[rank].dq_url,1);
		requests[rank].send();
	}
})();
