#include<iostream>
#include<cmath>
#include<windows.h>
#include<ctime>
#include<cstdio>
using namespace std;

int sj(int a,int b)
{
	srand((unsigned)time(NULL)+rand());
	return rand()%(b-a+1)+a;
} 

void zbsc(int x,int y)  
{
    CONSOLE_SCREEN_BUFFER_INFO    csbiInfo;                            
    HANDLE    hConsoleOut;
    hConsoleOut=GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleScreenBufferInfo(hConsoleOut,&csbiInfo);
    csbiInfo.dwCursorPosition.X=x-1;                                    
    csbiInfo.dwCursorPosition.Y=y-1;                                    
    SetConsoleCursorPosition(hConsoleOut,csbiInfo.dwCursorPosition);   
}

void jiazai()
{
	int a=1;
	int jindu;
	while(1)
	{
		printf("               正在载入PND引狼入室模块v1.10.2            v1.1.0");
		printf("\n");
		zbsc(1,4);
		printf("[----------------------------------------------------------------------]\r");
		zbsc(1,3);
		jindu=sj(1,30);
		printf("%d%%\r",a);
		zbsc(1,4);
		printf("[");
		zbsc(2,4);
   		for(int i=0;i<a*71/100;++i)
    	{
    		printf("=");    	
		}
		a+=jindu;
		if(a>=100)
		{
			system("cls");
			printf("               正在载入PND引狼入室模块v1.10.2            v1.1.0");
			printf("\n");
			zbsc(1,3);
			printf("100%%\r");
			zbsc(1,4);
			printf("[");
			for(int i=0;i<70;++i)printf("=");
			printf("]");
			break;
		}
    	Sleep(sj(200,1800));
		system("cls");
	}
	Sleep(1000);
	system("cls");
}

int main()
{
	POINT p;
	int a;
	freopen("in.txt","r",stdin);
	//printf("               正在载入PND引狼入室模块v1.10.2            v1.1.0");
	//printf("\n");
	Sleep(100);
	jiazai();
	printf("               正在载入PND引狼入室模块v1.10.2            v1.1.0");
	printf("\n");
	printf("\n加载完成，正在进入。。。");
	Sleep(sj(100,2000));
	//
	while(1)
	{
		GetCursorPos(&p);
		a=0;
		while(a<3)
		{
			SetCursorPos(p.x+sj(10,2100),p.y);
			a++;
		}
		Sleep(1);
		mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
		Sleep(10);
		mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
		printf("\a");
		GetCursorPos(&p);
		a=0;
		while(a<3)
		{
			SetCursorPos(p.x,p.y+sj(10,2100));
			a++;
		}
		Sleep(1);
		mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
		Sleep(10);
		mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
		printf("\a");
		GetCursorPos(&p);
		a=0;
		while(a<3)
		{
			SetCursorPos(p.x-sj(10,2100),p.y);
			a++;
		}
		Sleep(1);
		mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
		Sleep(10);
		mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
		printf("\a");
		GetCursorPos(&p);
		a=0;
		while(a<3)
		{
			SetCursorPos(p.x,p.y-sj(10,2100));
			a++;
		}
		Sleep(1);
		mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
		Sleep(10);
		mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
		printf("\a");
	}
	return 0;
}
