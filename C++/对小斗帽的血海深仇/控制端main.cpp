#include<bits/stdc++.h>
#include<windows.h>
#include<ctime>
#include <WINSOCK2.H>

#define tin int
#define itn int
#define tni int
#define nit int
#define nti int
#define pritnf printf
#define scnaf scanf
#define retrun return
#define ll long long
#define inl inline
#define infa 0x3f3f3f3f
#define infb 0x7fffffff
#define infc 1061109567
#define infd 0x7f
#define maxa 10240

#define SERVER_ADDRESS "172.22.21.102" //��������IP��ַ      
#define PORT 5150
#define MSGSIZE 10240         //�շ��������Ĵ�С      
#pragma comment(lib, "ws2_32.lib")
using namespace std;

WSADATA wsaData;    
SOCKET sClient;//���������׽��� 
SOCKADDR_IN server;//����Զ�̷������ĵ�ַ��Ϣ
char szMessage[maxa];//�շ�������      
int ret;//�ɹ������ֽڵĸ���
string kw="";

itn main()
{
	WSAStartup(0x0202,&wsaData);
    sClient=socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
    memset(&server, 0, sizeof(SOCKADDR_IN));
    server.sin_family=PF_INET;
    server.sin_port=htons(PORT);
    server.sin_addr.s_addr=inet_addr(SERVER_ADDRESS);
    connect(sClient,(struct sockaddr*)&server,sizeof(SOCKADDR_IN));
    //
    while(1)
    {
    	cin>>kw;
    	sprintf(szMessage,"%s",kw.c_str());
    	send(sClient,szMessage,strlen(szMessage),0);
	}
	//
	closesocket(sClient);//�ͷ����Ӻͽ��н�������
    WSACleanup();
	return 0;
}
