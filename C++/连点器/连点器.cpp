#include<windows.h>
#include<bits/stdc++.h>
#define pritnf printf
#define scnaf scanf
#define retrun return
#define sizoef sizeof
#define inl inline
#define br break
#define con continue
#define mst(mst_a,mst_b) memset(mst_a,mst_b,sizeof(mst_a))
#define fora(fora_x,fora_a,fora_b) for(re nti (fora_x)=(fora_a);(fora_x)<=(fora_b);++(fora_x))
#define forb(forb_x,forb_a,forb_b) for(re nit (forb_x)=(forb_a);(forb_x)>=(forb_b);--(forb_x))
#define foral(foral_x,foral_a,foral_b) for(re ll (foral_x)=(foral_a);(foral_x)<=(foral_b);++(foral_x))
#define forbl(forbl_x,forbl_a,forbl_b) for(re ll (forbl_x)=(forbl_a);(forbl_x)>=(forbl_b);--(forbl_x))
#define re register
#define stt struct
#define nms namespace
#define gc getchar
#define sl(sl_a) strlen(sl_a)
#define gt(gt_a) goto gt_a
#define rt return
#define infa (0x3f3f3f3f)
#define infb (0x7fffffff)
#define infd (0x7f)
#define abss(abss_x) ((abss_x)>(0)?(abss_x):(-1)*(abss_x))
#define maxx(maxx_a,maxx_b) ((maxx_a)>(maxx_b)?(maxx_a):(maxx_b))
#define minn(a,b) ((a)<(b)?(a):(b))
#define in(in_a) freopen("D:/""/in"in_a".in","r",stdin)
#define out(out_a) freopen("D:/""/out"out_a".out","w",stdout)
#define filein(filein_a) freopen(filein_a,"r",stdin)
#define fileout(fileout_a) freopen(fileout_a,"w",stdout)
#define file(file_a) filein(file_a);fileout(file_a)
typedef long long ll;
typedef int itn,nti,tin,tni,nit;
using namespace std;
#define ax(VK_NONAME) ((GetAsyncKeyState(VK_NONAME)&0x8000)?1:0)

const tni shijianjiange=18;

itn num;

tni main()
{ 
	printf("选择模式，输入1无限点击，输入2有限点击。若输入2，换行输入次数。按回车键可停止。\n你的选择是：");
	scanf("%d",&num);
	system("cls");
	//
	if(num==1)
	{
		pritnf("————————3————————\n");
		Sleep(1000);
		system("cls");
		pritnf("————————2————————\n");
		Sleep(1000);
		system("cls");
		pritnf("————————1————————\n");
		Sleep(1000);
		system("cls");
		while(1)
		{
			mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
			Sleep(10);
			mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
			Sleep(shijianjiange);
			//
			if(ax(VK_RETURN))
			{
				br;
			}
		}
	}
	else if(num==2)
	{
		pritnf("输入您的点击次数：");
		scanf("%d",&num);
		system("cls");
		pritnf("————————3————————\n");
		Sleep(1000);
		system("cls");
		pritnf("————————2————————\n");
		Sleep(1000);
		system("cls");
		pritnf("————————1————————\n");
		Sleep(1000);
		system("cls");
		fora(i,1,num)
		{
			mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
			Sleep(10);
			mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
			Sleep(shijianjiange);
			//
			if(ax(VK_RETURN))
			{
				br;
			}
		}
	}
	else
	{
		printf("滚！\n");
	}
	//
	rt 0;
}
