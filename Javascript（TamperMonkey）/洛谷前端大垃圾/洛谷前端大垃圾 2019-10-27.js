// ==UserScript==
// @name         ���ǰ�˴�����
// @namespace    http://tampermonkey.net/
// @version      1.17
// @description  �����¼�Զ���ת���ɰ�ҳ�棬�������ǰ�˿������ȥ��ȥ��
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
