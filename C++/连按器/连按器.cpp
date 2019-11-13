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
#define fora(fora_x,fora_a,fora_b) for(re ll (fora_x)=(fora_a);(fora_x)<=(fora_b);++(fora_x))
#define forb(forb_x,forb_a,forb_b) for(re ll (forb_x)=(forb_a);(forb_x)>=(forb_b);--(forb_x))
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
#define ax(ax_a) keybd_event(ax_a,0,1,0)
#define fk(fk_a) keybd_event(fk_a,0,0,0)
const ll randmax=32767,beishu=100000;
const ll xiaxian=100,shangxian=4000;

ll ls,shijianjiange;
itn num;

inl ll sj(ll sj_l,ll sj_r);

tni main()
{
	printf("选择模式，输入1无限次数按下，输入2有限次数按下。若输入2，换行输入次数。按回车键可停止。\n你的选择是：");
	scanf("%d",&num);
	system("cls");
	//
	if(num==1)
	{
		pritnf("————————3————————\n");
		Sleep(900);
		system("cls");
		pritnf("————————2————————\n");
		Sleep(900);
		system("cls");
		pritnf("————————1————————\n");
		Sleep(900);
		system("cls");
		while(1)
		{
			ax(VK_F5);
			fk(VK_F5);
			shijianjiange=sj(xiaxian,shangxian);
			ls=shijianjiange*beishu;
			fora(i,1,ls)
			{
				if(GetAsyncKeyState(VK_RETURN)&0x8000)
				{
					gt(ending);
				}
			}
			//
			if(GetAsyncKeyState(VK_RETURN)&0x8000)
			{
				gt(ending);
			}
		}
	}
	else if(num==2)
	{
		pritnf("输入您的按下次数：");
		scanf("%d",&num);
		system("cls");
		pritnf("————————3————————\n");
		Sleep(900);
		system("cls");
		pritnf("————————2————————\n");
		Sleep(900);
		system("cls");
		pritnf("————————1————————\n");
		Sleep(900);
		system("cls");
		fora(i,1,num)
		{
			ax(VK_F5);
			fk(VK_F5);
			shijianjiange=sj(xiaxian,shangxian);
			ls=shijianjiange*beishu;
			fora(i,1,ls)
			{
				if(GetAsyncKeyState(VK_RETURN)&0x8000)
				{
					gt(ending);
				}
			}
			//
			if(GetAsyncKeyState(VK_RETURN)&0x8000)
			{
				gt(ending);
			}
		}
	}
	else
	{
		printf("滚！\n");
		gt(ending);
	}
	ending:
	//
	rt 0;
}

inl ll sj(ll sj_l,ll sj_r)
{
	ll sj_a=sj_l,sj_b=sj_r;
	if(sj_a==sj_b)
	{
		rt sj_a;
	}
	if(sj_a>sj_b)
	{
		ll sj_c=sj_a;
		sj_a=sj_b;
		sj_b=sj_c;
	}
	ll sj_ans=0;
	ll sj_cha=sj_b-sj_a+1;
	//
	if(sj_cha<=randmax)
	{
		sj_ans=rand()%sj_cha;
	}
	else
	{
		ll sj_times=sj_cha/randmax;
		ll sj_time=sj(1,sj_times+1);
		foral(sj_i,2,sj_time)
		{
			sj_ans=sj_ans+rand();
		}
		sj_ans=sj_ans+sj(1,sj_cha%randmax);
	}
	//
	rt sj_ans+sj_a;
}



//#include<windows.h>
//#include<bits/stdc++.h>
//#define pritnf printf
//#define scnaf scanf
//#define retrun return
//#define sizoef sizeof
//#define inl inline
//#define br break
//#define con continue
//#define mst(mst_a,mst_b) memset(mst_a,mst_b,sizeof(mst_a))
//#define fora(fora_x,fora_a,fora_b) for(re nti (fora_x)=(fora_a);(fora_x)<=(fora_b);++(fora_x))
//#define forb(forb_x,forb_a,forb_b) for(re nit (forb_x)=(forb_a);(forb_x)>=(forb_b);--(forb_x))
//#define foral(foral_x,foral_a,foral_b) for(re ll (foral_x)=(foral_a);(foral_x)<=(foral_b);++(foral_x))
//#define forbl(forbl_x,forbl_a,forbl_b) for(re ll (forbl_x)=(forbl_a);(forbl_x)>=(forbl_b);--(forbl_x))
//#define re register
//#define stt struct
//#define nms namespace
//#define gc getchar
//#define sl(sl_a) strlen(sl_a)
//#define gt(gt_a) goto gt_a
//#define rt return
//#define infa (0x3f3f3f3f)
//#define infb (0x7fffffff)
//#define infd (0x7f)
//#define abss(abss_x) ((abss_x)>(0)?(abss_x):(-1)*(abss_x))
//#define maxx(maxx_a,maxx_b) ((maxx_a)>(maxx_b)?(maxx_a):(maxx_b))
//#define minn(a,b) ((a)<(b)?(a):(b))
//#define in(in_a) freopen("D:/""/in"in_a".in","r",stdin)
//#define out(out_a) freopen("D:/""/out"out_a".out","w",stdout)
//#define filein(filein_a) freopen(filein_a,"r",stdin)
//#define fileout(fileout_a) freopen(fileout_a,"w",stdout)
//#define file(file_a) filein(file_a);fileout(file_a)
//typedef long long ll;
//typedef int itn,nti,tin,tni,nit;
//using namespace std;
//#define ax(ax_a) keybd_event(ax_a,0,1,0)
//#define fk(fk_a) keybd_event(fk_a,0,0,0)
//const tni shijianjiange=2000;
//
//itn num;
//
//tni main()
//{
//	printf("选择模式，输入1无限次数按下，输入2有限次数按下。若输入2，换行输入次数。按回车键可停止。\n你的选择是：");
//	scanf("%d",&num);
//	system("cls");
//	//
//	if(num==1)
//	{
//		pritnf("————————3————————\n");
//		Sleep(900);
//		system("cls");
//		pritnf("————————2————————\n");
//		Sleep(900);
//		system("cls");
//		pritnf("————————1————————\n");
//		Sleep(900);
//		system("cls");
//		while(1)
//		{
//			ax(VK_F5);
//			fk(VK_F5);
//			Sleep(shijianjiange);
//			//
//			if(GetAsyncKeyState(VK_RETURN)&0x8000)
//			{
//				br;
//			}
//		}
//	}
//	else if(num==2)
//	{
//		pritnf("输入您的按下次数：");
//		scanf("%d",&num);
//		system("cls");
//		pritnf("————————3————————\n");
//		Sleep(900);
//		system("cls");
//		pritnf("————————2————————\n");
//		Sleep(900);
//		system("cls");
//		pritnf("————————1————————\n");
//		Sleep(900);
//		system("cls");
//		fora(i,1,num)
//		{
//			ax(VK_F5);
//			fk(VK_F5);
//			Sleep(shijianjiange);
//			//
//			if(GetAsyncKeyState(VK_RETURN)&0x8000)
//			{
//				br;
//			}
//		}
//	}
//	else
//	{
//		printf("滚！\n");
//	}
//	//
//	rt 0;
//}
