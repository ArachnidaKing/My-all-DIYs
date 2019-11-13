#include<bits/stdc++.h>
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
#define sizoef sizeof
#define ll long long
#define ld long double
#define inl inline
#define br break
#define con continue
#define mst(a,b) memset(a,b,sizeof(a))
#define fora(x,a,b) for(re tni x=a;x<=b;++x)
#define forb(x,a,b) for(re nit x=a;x>=b;--x)
#define re register
#define str struct
#define infa 0x3f3f3f3f
#define infb 0x7fffffff
#define infc 1061109567
#define infd 0x7f
#define abss(x) ((x)>(0)?(x):(-1)*(x))
#define maxx(a,b) ((a)>(b)?(a):(b))
#define minn(a,b) ((a)<(b)?(a):(b))
#define pf(_) ((_)*(_))
using namespace std;

double x;

inl int sj(int a,int b)
{
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

itn main()
{
	srand(time(NULL));
	srand(rand()+19260817);
	srand(rand()*19491001);
	srand(rand()-20021110);
	srand(rand());
	//
	tni a=1,jindu;
	while(1)
	{
		zbsc(1,2);
		printf("[--------------------------------------------------]\r");
		zbsc(1,1);
		jindu=sj(15,20);
		printf("%d%%\r",a);
		zbsc(1,2);
		printf("[");
		zbsc(2,2);
   		for(int i=0;i<a*51/100;++i)
    	{
    		printf("=");    	
		}
		a+=jindu;
		if(a>=100)
		{
			system("cls");
			zbsc(1,1);
			printf("100%%\r");
			zbsc(1,2);
			printf("[");
			for(int i=0;i<50;++i)printf("=");
			printf("]");
			break;
		}
    	Sleep(sj(250,600));
		system("cls");
	}
	Sleep(sj(700,2500));
	//
	zbsc(1,1);
	x=sj(1000,9999)*1.0/1000;
	pritnf("叮~~遗憾地通知您，由于某种不可抗力，解压失败！下次成功率+%.4lf%%。\n请不要对我们的产品失望，也是有好消息的哟！当前压缩文件理论大小仍为1B，我们最大限度地节省了您的内存空间！\n欢迎您的下次使用，谢谢！\n",x);
	system("pause");
	return 0;
}
