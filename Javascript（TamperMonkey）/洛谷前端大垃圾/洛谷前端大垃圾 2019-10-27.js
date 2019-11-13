// ==UserScript==
// @name         洛谷前端大垃圾
// @namespace    http://tampermonkey.net/
// @version      1.17
// @description  评测记录自动跳转至旧版页面，并让洛谷前端开发组该去哪去哪
// @author       ArachnidaKing
// @match        https://www.luogu.org/record/*
// @grant        none
// ==/UserScript==

(function()
{
    'use strict';
    //
    const old_pre_url="https://www.luogu.org/recordnew/show/"
	//
    var dq_url=location.href;
    var dq_pid=dq_url.substring(29);
    var to_url=old_pre_url+dq_pid;
    //
    window.location.replace(to_url);
})();
