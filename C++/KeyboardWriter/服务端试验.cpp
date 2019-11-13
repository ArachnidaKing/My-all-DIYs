#include <WINSOCK2.H>   
#include <bits/stdc++.h>
#include<windows.h>
#define PORT 5151
#include<ctime>
#define MSGSIZE 1024
#pragma comment(lib, "ws2_32.lib") 
#define ds time_t t=time(0);strftime(a,sizeof(a),"%Y/%m/%d %X",localtime(&t));cout<<a
#define maxa 100004
using namespace std;


char szMessage[MSGSIZE],a[maxa]="";      
int ret;      
int iaddrSize=sizeof(SOCKADDR_IN);

int main()      
{
	//freopen("D://LPH//自制//KeyboardWriter//服务试验//服务试验.txt","w",stdout);
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
    while(1)
	{
        ret=recv(sClient,szMessage,MSGSIZE,0);
        szMessage[ret]='\000';
        ds;
        printf("    ");
        printf("%s\n",szMessage);
    	//printf("Received [%d bytes]: '%s'\n",ret,szMessage);
    }
	return 0;	
}
