#include <WINSOCK2.H>
#include <bits/stdc++.h>
#include<windows.h> 
#include<ctime>

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

#define jc(VK_NONAME) ((GetAsyncKeyState(VK_NONAME)& 0x8000)?1:0)
#define dd GetCursorPos(&p)
#define yd(a,b) p.x+=a,p.y+=b;
#define ds time_t t=time(0);strftime(nowtime,sizeof(nowtime),"%Y/%m/%d %X",localtime(&t));

#define SERVER_ADDRESS "172.22.21.117"//��������IP��ַ      
#define PORT 5150
#define MSGSIZE 10240//�շ��������Ĵ�С      
#pragma comment(lib, "ws2_32.lib")
using namespace std;

WSADATA wsaData;    
SOCKET sClient;//���������׽��� 
SOCKADDR_IN server;//����Զ�̷������ĵ�ַ��Ϣ
char szMessage[maxa];//�շ�������      
int ret;//�ɹ������ֽڵĸ���
char nowtime[maxa]="";
    
int main()      
{      
    
          
    WSAStartup(0x0202,&wsaData);// Initialize Windows socket library
          
    sClient=socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);// �����ͻ����׽��֣�AF_INETָ��ʹ��TCP/IPЭ���壻
	//SOCK_STREAM, IPPROTO_TCP����ָ��ʹ��TCPЭ��
	// ָ��Զ�̷������ĵ�ַ��Ϣ(�˿ںš�IP��ַ��)      
    memset(&server, 0, sizeof(SOCKADDR_IN)); //�Ƚ������ַ��server��Ϊȫ0 
    server.sin_family=PF_INET; //������ַ��ʽ��TCP/IP��ַ��ʽ
    server.sin_port=htons(PORT); //ָ�����ӷ������Ķ˿ںţ�htons()���� converts values between the host and network byte order
    server.sin_addr.s_addr=inet_addr(SERVER_ADDRESS); //ָ�����ӷ�������IP��ַ
    //�ṹSOCKADDR_IN��sin_addr�ֶ����ڱ���IP��ַ��sin_addr�ֶ�Ҳ��һ���ṹ�壬sin_addr.s_addr�������ձ���IP��ַ
    //inet_addr()���ڽ� �����"127.0.0.1"�ַ���ת��ΪIP��ַ��ʽ
    //�����ղ�ָ���ķ�������      
    connect(sClient,(struct sockaddr*)&server,sizeof(SOCKADDR_IN));//���Ӻ������sClient��ʹ���������
    //server������Զ�̷������ĵ�ַ��Ϣ
    
    while(TRUE)
	{      
        //printf("Send:");
        //�Ӽ�������
        if(jc(MOUSE_MOVED)){
		
		ds;
		strcpy(szMessage,nowtime);
        // ��������
         //sClientָ�����ĸ����ӷ��ͣ� szMessageָ�����������ݵı����ַ ��strlen(szMessage)ָ�����ݳ���
    	/*
		int stick=0;
		while(jc(MOUSE_MOVED))
		{
			Sleep(1),++stick;
		}
		sprintf(szMessage,"%s ����ʱ��:%d ms",szMessage,stick);
		*/
		sprintf(szMessage,"%s",szMessage);
		send(sClient,szMessage,strlen(szMessage),0);
		}
	}
    closesocket(sClient);//�ͷ����Ӻͽ��н�������
    WSACleanup();      
    return 0;
}
