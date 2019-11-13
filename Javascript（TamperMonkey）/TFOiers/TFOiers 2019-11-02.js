// ==UserScript==
// @name         TFOiers
// @version      0.97
// @namespace    http://tampermonkey.net/
// @description  Be TF!!!
// @author       ArachnidaKing
// @match        https://www.luogu.org/problemnew/solution/*
// @grant        none
// ==/UserScript==

(function()
{
	'use strict';
	//
	var F2Code=113;
	//
	var inputs=document.getElementsByTagName("textarea");
	var input_num=inputs.length;
	//
	var playPositionId;
	document.onkeydown=function(event)
	{
		if(event.keyCode==F2Code)
		{
			for(let i=0;i<input_num;++i)
			{
				if(inputs[i].value)
				{
					playPositionId=i;
					++F2Code;
					if(F2Code==116)
					{
						F2Code=-1;
					}
					break;
				}
			}
			//
			find(playPositionId);
		}
	};
	////
	function find(p)
	{
		let thisAllParagraphs=document.getElementsByClassName("lg-article am-g")[p+1].getElementsByTagName("p");
		let textNextParagraph_p=(thisAllParagraphs.length>2)?(2):(-1);
		//
		let textNode=document.createElement("p");
		let thisArtical=document.getElementsByClassName("lg-article am-g")[p+1];
		if(textNextParagraph_p<0)
		{
			thisArtical.insertBefore(textNode,thisArtical.lastChild);
		}
		else
		{
			thisArtical.insertBefore(textNode,thisAllParagraphs[textNextParagraph_p]);
		}
		//
		work(textNode);
	}
	//
	function work(textBoard)
	{
		const lengthPerParagraph=100;
		const novelText=inputs[playPositionId].value;
		const novelTextLength=novelText.length;
		//
		let char_p=0;
		//
		let dq_paragraph;
		let f=0;
		for(let i=0;i<20;++i)
		{
			if(novelTextLength-char_p-1<=lengthPerParagraph)
			{
				f=1;
			}
			dq_paragraph=novelText.substr(char_p,lengthPerParagraph);
			char_p+=lengthPerParagraph;
			//
			window.setTimeout(function(node,text)
			{
				node.innerHTML=text;
			},12000*i,textBoard,dq_paragraph);
			//
			if(f)
			{
				break;
			}
		}
	}
})();
