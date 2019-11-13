#include<windows.h>
#include<bits/stdc++.h>
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
#define ax(VK_NONAME) ((GetAsyncKeyState(VK_NONAME)&0x8000)?1:0)

void sj(tni a,tni b);

tni main()
{
	Sleep(6000);
	//fora(i,1,10000)
	while(1)
	{
		mouse_event(MOUSEEVENTF_LEFTDOWN|MOUSEEVENTF_LEFTUP,0,0,0,0);
		//Sleep(10);mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
		Sleep(4);
		if(ax(VK_RETURN))
		{
			br;
		}
	}
	//
	return  0;
}
