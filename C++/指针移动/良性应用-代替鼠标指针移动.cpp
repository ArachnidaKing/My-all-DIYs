#include<bits/stdc++.h>
#define tin int
#define itn int
#define tni int
#define nit int
#define nti int
#define pritnf printf
#define ll long long
#define infa 0x3f3f3f3f
#define infb 0x7fffffff
#define infc 1061109567
#define infd 0x7f
#define maxa 10005
#define maxb 1455
#include<windows.h>
#include<process.h>
#include<pthread.h>
#include <sys/time.h>
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME)&0x8000)?0:1)

#define dd GetCursorPos(&p)
#define yd(a,b) p.x+=a,p.y+=b;

#define axz mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0)
#define fkz mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0)
#define axy mouse_event(MOUSEEVENTF_RIGHTDOWN,0,0,0,0)
#define fky mouse_event(MOUSEEVENTF_RIGHTUP,0,0,0,0)
using namespace std;

HWND hwnd;
HANDLE hMutex;
POINT p;
itn dert;

extern void s();//�����ⲿ���� 
extern void x();
extern void z();
extern void y();
extern void zj();
extern void yj();
extern void ts();









DWORD WINAPI s(LPVOID lpParamter)//�߳�Ҫ���еĺ���
{
	while(1)
	{
		s();
		WaitForSingleObject(hMutex, INFINITE);//����������Դ������������
		Sleep(5);
		ReleaseMutex(hMutex);
	}
}

DWORD WINAPI x(LPVOID lpParamter)//�߳�Ҫ���еĺ���
{
	while(1)
	{
		x();
		WaitForSingleObject(hMutex, INFINITE);//����������Դ������������
		Sleep(5);
		ReleaseMutex(hMutex);
	}
}

DWORD WINAPI z(LPVOID lpParamter)	//�߳�Ҫ���еĺ���
{
	while(1)
	{
		z();
		WaitForSingleObject(hMutex, INFINITE);//����������Դ������������
		Sleep(5);
		ReleaseMutex(hMutex);
	}
}

DWORD WINAPI y(LPVOID lpParamter)	//�߳�Ҫ���еĺ���
{
	while(1)
	{
		y();
		WaitForSingleObject(hMutex, INFINITE);//����������Դ������������
		Sleep(5);
		ReleaseMutex(hMutex);
	}
}

DWORD WINAPI zj(LPVOID lpParamter)	//�߳�Ҫ���еĺ���
{
	while(1)
	{
		zj();
		WaitForSingleObject(hMutex, INFINITE);//����������Դ������������
		Sleep(5);
		ReleaseMutex(hMutex);
	}
}

DWORD WINAPI yj(LPVOID lpParamter)	//�߳�Ҫ���еĺ���
{
	while(1)
	{
		yj();
		WaitForSingleObject(hMutex, INFINITE);//����������Դ������������
		Sleep(5);
		ReleaseMutex(hMutex);
	}
}

DWORD WINAPI ts(LPVOID lpParamter)	//�߳�Ҫ���еĺ���
{
	while(1)
	{
		ts();
		WaitForSingleObject(hMutex, INFINITE);//����������Դ������������
		Sleep(5);
		ReleaseMutex(hMutex);
	}
}









int main()
{
	char str[256];
	GetConsoleTitle(str,sizeof(str));
	hwnd=FindWindow(NULL,str);
	int a;
	srand((unsigned)time(NULL));
	dd;
	//
	HANDLE hThreads=CreateThread(NULL,0,s,NULL,0,NULL);//�����߳�
	HANDLE hThreadx=CreateThread(NULL,0,x,NULL,0,NULL);//�����߳�
	HANDLE hThreadz=CreateThread(NULL,0,z,NULL,0,NULL);//�����߳�
	HANDLE hThready=CreateThread(NULL,0,y,NULL,0,NULL);//�����߳�
	HANDLE hThreadzj=CreateThread(NULL,0,zj,NULL,0,NULL);//�����߳�
	HANDLE hThreadyj=CreateThread(NULL,0,yj,NULL,0,NULL);//�����߳�
	HANDLE hThreadts=CreateThread(NULL,0,ts,NULL,0,NULL);//�����߳�
	//
	while(1)
	{
		SetCursorPos(p.x,p.y);
	}
	return 0;
}

void s()
{
	if(GetAsyncKeyState(104))//shang
	{
		if(p.y>=0)
		{
			yd(0,-dert);
		}
	}
	return;
}

void x()
{
	if(GetAsyncKeyState(101))//xia
	{
		if(p.y<=1079)
		{
			yd(0,dert);
		}
	}
	return;
}

void z()
{
	if(GetAsyncKeyState(100))//zuo
	{
		if(p.x>=0)
		{
			yd(-dert,0);
		}
	}
	return;
}

void y()
{
	if(GetAsyncKeyState(102))//you
	{
		if(p.x<=1919)
		{
			yd(dert,0);
		}
	}
	return;
}

void zj()
{
	if(GetAsyncKeyState(45))//��� 
	{
		axz;
		while(GetAsyncKeyState(45))Sleep(1);
		Sleep(10);
		fkz;
	}
	return;
}

void yj()
{
	bool a=true;
	if(GetAsyncKeyState(36))//�Ҽ� 
	{
		axy;
		while(GetAsyncKeyState(36))Sleep(1);
		Sleep(10);
		fky;
	}
	return;
}

void ts()
{
	if(GetAsyncKeyState(35))
	{
		dert=2;
	}
	else
	{
		dert=6;
	}
}



/*
#include<bits/stdc++.h>
#define tin int
#define itn int
#define tni int
#define nit int
#define nti int
#define pritnf printf
#define ll long long
#define infa 0x3f3f3f3f
#define infb 0x7fffffff
#define infc 1061109567
#define infd 0x7f
#define maxa 10005
#define maxb 1455
#include<windows.h>
#include<process.h>
#include<pthread.h>
#include <sys/time.h>
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME)&0x8000)?0:1)

#define dd GetCursorPos(&p)
#define yd(a,b) SetCursorPos(p.x+a,p.y+b)

#define axz mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0)
#define fkz mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0)
#define axy mouse_event(MOUSEEVENTF_RIGHTDOWN,0,0,0,0)
#define fky mouse_event(MOUSEEVENTF_RIGHTUP,0,0,0,0)
using namespace std;

HWND hwnd;
HANDLE hMutex;
POINT p;

extern void s();//�����ⲿ���� 
extern void x();
extern void z();
extern void y();
extern void zj();
extern void yj();









DWORD WINAPI s(LPVOID lpParamter)//�߳�Ҫ���еĺ���
{
	while(1)
	{
		s();
		WaitForSingleObject(hMutex, INFINITE);//����������Դ������������
		Sleep(5);
		ReleaseMutex(hMutex);
	}
}

DWORD WINAPI x(LPVOID lpParamter)//�߳�Ҫ���еĺ���
{
	while(1)
	{
		x();
		WaitForSingleObject(hMutex, INFINITE);//����������Դ������������
		Sleep(5);
		ReleaseMutex(hMutex);
	}
}

DWORD WINAPI z(LPVOID lpParamter)	//�߳�Ҫ���еĺ���
{
	while(1)
	{
		z();
		WaitForSingleObject(hMutex, INFINITE);//����������Դ������������
		Sleep(5);
		ReleaseMutex(hMutex);
	}
}

DWORD WINAPI y(LPVOID lpParamter)	//�߳�Ҫ���еĺ���
{
	while(1)
	{
		y();
		WaitForSingleObject(hMutex, INFINITE);//����������Դ������������
		Sleep(5);
		ReleaseMutex(hMutex);
	}
}

DWORD WINAPI zj(LPVOID lpParamter)	//�߳�Ҫ���еĺ���
{
	while(1)
	{
		zj();
		WaitForSingleObject(hMutex, INFINITE);//����������Դ������������
		Sleep(5);
		ReleaseMutex(hMutex);
	}
}

DWORD WINAPI yj(LPVOID lpParamter)	//�߳�Ҫ���еĺ���
{
	while(1)
	{
		yj();
		WaitForSingleObject(hMutex, INFINITE);//����������Դ������������
		Sleep(5);
		ReleaseMutex(hMutex);
	}
}









int main()
{
	char str[256];
	GetConsoleTitle(str,sizeof(str));
	hwnd=FindWindow(NULL,str);
	int a;
	srand((unsigned)time(NULL));
	//
	HANDLE hThreads=CreateThread(NULL,0,s,NULL,0,NULL);//�����߳�
	HANDLE hThreadx=CreateThread(NULL,0,x,NULL,0,NULL);//�����߳�
	HANDLE hThreadz=CreateThread(NULL,0,z,NULL,0,NULL);//�����߳�
	HANDLE hThready=CreateThread(NULL,0,y,NULL,0,NULL);//�����߳�
	HANDLE hThreadzj=CreateThread(NULL,0,zj,NULL,0,NULL);//�����߳�
	HANDLE hThreadyj=CreateThread(NULL,0,yj,NULL,0,NULL);//�����߳�
	//
	while(1)
	{
		
	}
	return 0;
}

void s()
{
	if(GetAsyncKeyState(104))//shang
	{
		dd;
		yd(0,-12);
		//Sleep(1);
	}
	return;
}

void x()
{
	if(GetAsyncKeyState(101))//xia
	{
		dd;
		yd(0,12);
		//Sleep(1);
	}
	return;
}

void z()
{
	if(GetAsyncKeyState(100))//zuo
	{
		dd;
		yd(-12,0);
		//Sleep(1);
	}
	return;
}

void y()
{
	if(GetAsyncKeyState(102))//you
	{
		dd;
		yd(12,0);
		//Sleep(1);
	}
	return;
}

void zj()
{
	if(GetAsyncKeyState(36))//��� 
	{
		axz;
		Sleep(80);
		fkz;
	}
	return;
}

void yj()
{
	if(GetAsyncKeyState(35))//�Ҽ� 
	{
		axy;
		Sleep(80);
		fky;
	}
	return;
}
*/
