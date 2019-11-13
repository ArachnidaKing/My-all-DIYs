#include<windows.h>
#include<bits/stdc++.h>
#define br break
#define rt return
using  namespace std;
typedef int itn,nit,tin,nti,tni;
#define jcax(jcax_a) GetAsyncKeyState(jcax_a)&0x8000

/*
13:VK_RETURN
16:VK_SHIFT
17:VK_CONTROL
35:VK_END
36:VK_HOME
37:VK_LEFT
38:VK_UP
39:VK_RIGHT
40:VK_DOWN
107:VK_ADD
109:VK_SUBTRACT
*/

HWND hwnd;
char str[256]="";

itn main()
{
	GetConsoleTitle(str,sizeof(str));
	hwnd=FindWindow(NULL,str);
	ShowWindow(hwnd,0);
	//
	while(1)
	{
		system("taskkill /im StudentMain.exe /f /t");
		system("taskkill /im ProcHelper64.exe /f /t");
		system("taskkill /im GATESRV.exe /f /t");
		system("taskkill /im MasterHelper.exe /f /t");
		system("taskkill /im StudentMain.exe /f /t");
		system("taskkill /im ProcHelper64.exe /f /t");
		system("taskkill /im GATESRV.exe /f /t");
		system("taskkill /im MasterHelper.exe /f /t");
		Sleep(999);
		//
		while(1)
		{
			Sleep(20);
			if(jcax(13))
			{
				br;
			}
		}
		//
		system("start D://StudentMain.lnk /max");
		Sleep(999);
		//
		while(1)
		{
			Sleep(20);
			if(jcax(13))
			{
				br;
			}
		}
	}
	//
	rt 0;
}
