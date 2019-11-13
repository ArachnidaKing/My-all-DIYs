#include<bits/stdc++.h>
#include<windows.h>
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

string x;
tin n=0;

int sj(int a,int b)
{
	srand((unsigned)time(NULL)+rand());
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
	freopen("输入文件.txt","r",stdin);
	freopen("输出文件.txt","w",stdout);
	//
	while(1)
	{
		cin>>x;
		if(x=="Finish")
		{
			br;
		}
		fora(i,0,x.size())
		{
			(n+=(tni)x[i])%=2;
		}
	}
	pritnf("%d",n);
	freopen("con","r",stdin);
	freopen("con","w",stdout);
	//
	int a=1,jindu;
	while(1)
	{
		zbsc(1,2);
		printf("[------------------------------------------------------------------------------------------]\r");
		zbsc(1,1);
		jindu=sj(1,5);
		printf("%d%%\r",a);
		zbsc(1,2);
		printf("[");
		zbsc(2,2);
   		for(int i=0;i<a*91/100;++i)
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
			for(int i=0;i<90;++i)printf("=");
			printf("]");
			br;
		}
    	Sleep(sj(5,150));
		system("cls");
	}
	Sleep(sj(1000,3000));
	system("cls");
	//
	zbsc(1,1);
	pritnf("叮~~恭喜您，压缩完成！                                                                                      ");
	zbsc(1,2);
	pritnf("压缩后理论文件大小：1B。                                                                                                  ");
	zbsc(1,3);
	pritnf("欢迎您的下次使用，谢谢！                                                                                    ");
	zbsc(1,4);
	cin>>x;
	//
	return 0;
}
