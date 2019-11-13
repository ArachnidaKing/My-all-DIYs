#include<iostream>
#include<windows.h>
#include<cstdio>
#include <time.h>
#define itn int
#define tin int
#define tni int
#define nti int
#define nit int
using namespace std;
//#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME)&0x8000)?0:1)

int sj(int a,int b){
	return rand()%(b-a+1)+a;
}

int main()
{
	POINT p; 
	int a;
	srand((unsigned)time(NULL));
	//while(1)
	for(tin ii=1;ii<=100;++ii)
	{
		GetCursorPos(&p);
		a=0;
		while(a<3)
		{
			SetCursorPos(p.x+sj(10,2100),p.y);
			a++;
		}
		Sleep(1);
		/*mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
		Sleep(10);
		mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);*/
		printf("\a");
		GetCursorPos(&p);
		a=0;
		while(a<3)
		{
			SetCursorPos(p.x,p.y+sj(10,2100));
			a++;
		}
		Sleep(1);
		/*mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
		Sleep(10);
		mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);*/
		printf("\a");
		GetCursorPos(&p);
		a=0;
		while(a<3)
		{
			SetCursorPos(p.x-sj(10,2100),p.y);
			a++;
		}
		Sleep(1);
		/*mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
		Sleep(10);
		mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);*/
		printf("\a");
		GetCursorPos(&p);
		a=0;
		while(a<3)
		{
			SetCursorPos(p.x,p.y-sj(10,2100));
			a++;
		}
		Sleep(1);
		/*mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
		Sleep(10);
		mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);*/
		printf("\a");
		while(GetAsyncKeyState(37)&&GetAsyncKeyState(38))
		{
			Sleep(1);
		}
	}
	return 0;
}
