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

#define SERVER_ADDRESS "172.22.21.117"//服务器端IP地址      
#define PORT 5150
#define MSGSIZE 10240//收发缓冲区的大小      
#pragma comment(lib, "ws2_32.lib")
using namespace std;

WSADATA wsaData;    
SOCKET sClient;//连接所用套节字 
SOCKADDR_IN server;//保存远程服务器的地址信息
char szMessage[maxa];//收发缓冲区      
int ret;//成功接收字节的个数
char nowtime[maxa]="";
    
int main()      
{      
    
          
    WSAStartup(0x0202,&wsaData);// Initialize Windows socket library
          
    sClient=socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);// 创建客户端套节字，AF_INET指明使用TCP/IP协议族；
	//SOCK_STREAM, IPPROTO_TCP具体指明使用TCP协议
	// 指明远程服务器的地址信息(端口号、IP地址等)      
    memset(&server, 0, sizeof(SOCKADDR_IN)); //先将保存地址的server置为全0 
    server.sin_family=PF_INET; //声明地址格式是TCP/IP地址格式
    server.sin_port=htons(PORT); //指明连接服务器的端口号，htons()用于 converts values between the host and network byte order
    server.sin_addr.s_addr=inet_addr(SERVER_ADDRESS); //指明连接服务器的IP地址
    //结构SOCKADDR_IN的sin_addr字段用于保存IP地址，sin_addr字段也是一个结构体，sin_addr.s_addr用于最终保存IP地址
    //inet_addr()用于将 形如的"127.0.0.1"字符串转换为IP地址格式
    //连到刚才指明的服务器上      
    connect(sClient,(struct sockaddr*)&server,sizeof(SOCKADDR_IN));//连接后可以用sClient来使用这个连接
    //server保存了远程服务器的地址信息
    
    while(TRUE)
	{      
        //printf("Send:");
        //从键盘输入
        if(jc(MOUSE_MOVED)){
		
		ds;
		strcpy(szMessage,nowtime);
        // 发送数据
         //sClient指明用哪个连接发送； szMessage指明待发送数据的保存地址 ；strlen(szMessage)指明数据长度
    	/*
		int stick=0;
		while(jc(MOUSE_MOVED))
		{
			Sleep(1),++stick;
		}
		sprintf(szMessage,"%s 持续时间:%d ms",szMessage,stick);
		*/
		sprintf(szMessage,"%s",szMessage);
		send(sClient,szMessage,strlen(szMessage),0);
		}
	}
    closesocket(sClient);//释放连接和进行结束工作
    WSACleanup();      
    return 0;
}
