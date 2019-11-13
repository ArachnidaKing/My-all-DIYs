// ==UserScript==
// @name         TFOiers
// @version      0.35
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
//		console.log(input_num);
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
			play(playPositionId);
		}
	};
	////
	function play(p)
	{
//			console.log(p);
//			console.log(inputs[p].value);
//			console.log(solutionArticals[p+1].innerHTML);
		let thisAllParagraphs=document.getElementsByClassName("lg-article am-g")[p+1].getElementsByTagName("p");
//		let paragraphs=TFWorkPosition.children;
//		let paragraph_num=paragraphs.length;
//			console.log(paragraphs.length);
//		var paragraphsTagP[paragraph_num];
//		var p_paragraphsTagP=0;
			console.log(thisAllParagraphs.length);
			console.log(inputs[p].value);
		
	}
})();
