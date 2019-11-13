#include<bits/stdc++.h>
#include<windows.h>
#define br break
#define re register
#define rt return
#define fora(fora_x,fora_a,fora_b) for(re nti (fora_x)=(fora_a);(fora_x)<=(fora_b);++(fora_x))
#define gt(gt_a) goto gt_a
#define ax(ax_a) keybd_event(ax_a,0,1,0)
#define fk(fk_a) keybd_event(fk_a,0,0,0)
#define jcax(jcax_a) GetAsyncKeyState(jcax_a)&0x8000
typedef int itn,nti,tin,tni,nit;
using namespace std;
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
const tni STOP=37;
const tni Shortstop=38;
const nit Goon=39;
const tni Down=40;
const tni fast=36;
const tni slow=35;

HANDLE hMutex;

HWND hwnd;

tni wait=140;
char str[256];

DWORD WINAPI v_chg(LPVOID lpParamter);

tni main()
{
	GetConsoleTitle(str,sizeof(str));
	hwnd=FindWindow(NULL,str);
	ShowWindow(hwnd,0);
	//
	Sleep(3000);
	HANDLE hThreadd=CreateThread(NULL,0,v_chg,NULL,0,NULL);
	//
	while(1)
	{
		while(1)
		{
			ax(Down);
			fora(i,1,wait)
			{
				Sleep(10);
				if(jcax(STOP))
				{
					rt 0;
				}
				if(jcax(Shortstop))
				{
					gt(II);
				}
			}
			if(jcax(Shortstop))
			{
				gt(II);
			}
		}
		//
		II:
		while(1)
		{
			if(jcax(STOP))
			{
				rt 0;
			}
			if(jcax(Goon))
			{
				Sleep(300);
				br;
			}
		}
	}
	//
	rt 0;
}

DWORD WINAPI v_chg(LPVOID lpParamter)
{
	while(1)
	{
		while(jcax(fast))
		{
			wait-=5;
			Sleep(50);
		}
		while(jcax(slow))
		{
			wait+=5;
			Sleep(50);
		}
	}
}
