#include<windows.h>      
#include<bits/stdc++.h>
#define sacnf scanf
#define pritnf printf
#define srnad srand
#define rnad rand
#define sl(sl_a) strlen(sl_a)
#define gt(gt_a) goto gt_a
#define mst(mst_a,mst_b) memset(mst_a,mst_b,sizeof(mst_a))
#define fora(fora_x,fora_a,fora_b) for(re nti (fora_x)=(fora_a);(fora_x)<=(fora_b);++(fora_x))
#define forb(forb_x,forb_a,forb_b) for(re nit (forb_x)=(forb_a);(forb_x)>=(forb_b);--(forb_x))
#define foral(foral_x,foral_a,foral_b) for(re ll (foral_x)=(foral_a);(foral_x)<=(foral_b);++(foral_x))
#define forbl(forbl_x,forbl_a,forbl_b) for(re ll (forbl_x)=(forbl_a);(forbl_x)>=(forbl_b);--(forbl_x))
#define re register
#define inl inline
#define br break
#define con continue
#define stt struct
#define nms namespace
#define gc getchar
#define rt return
typedef long long ll;
typedef int itn,nti,tin,tni,nit;
using namespace std;

#define dj mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);Sleep(10);mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0)
#define rdj mouse_event(MOUSEEVENTF_RIGHTDOWN,0,0,0,0);Sleep(300);mouse_event(MOUSEEVENTF_RIGHTUP,0,0,0,0)
#define move(move_a,move_b) SetCursorPos(move_a,move_b)
#define ax(ax_a) keybd_event(ax_a,0,1,0)
#define jcax(jcax_a) GetAsyncKeyState(jcax_a)&0x8000
#define S(S_a) Sleep(S_a)
#define pi Sleep(60);if(key){return 0;}

HWND hwnd;
POINT p;
nit key=0;
char hide[256];

itn main()
{
	GetConsoleTitle(hide,sizeof(hide));
	hwnd=FindWindow(NULL,hide);
	ShowWindow(hwnd,0);//隐藏控制台
	Sleep(100);
	//
	move(40,625);/*移至“Dev-C++”*/pi;
	mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);/*按住“Dev-C++”*/Sleep(100);
	move(960,1080);/*移至任务栏*/pi;
	mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);/*放开“Dev-C++”*/Sleep(100);
	move(170,1080);/*移至任务栏（第3项）*/pi;
	dj;/*打开“Dev-C++”*/Sleep(500);
	ax(13);/*可能的报错*/Sleep(500);
	move(1380,360);/*移至“Dev-C++”标题栏*/pi;
	dj;pi;dj;/*最大化“Dev-C++”*/Sleep(100);
	move(810,55);/*移至“编译器”*/pi;
	dj;/*打开“编译器”*/pi;
	move(810,85);/*移至“64-bit Debug”*/pi;
	dj;/*点击“64-bit Debug”*/pi;
	move(185,30);/*移至“视图”*/pi;
	fora(i,1,8)
	{
		dj;/*打开“视图”*/pi;
		fora(j,1,3){ax(40);Sleep(90);}/*移至“工具条”*/
		ax(39);/*打开“工具条”*/Sleep(90);
		fora(j,2,i){ax(40);Sleep(90);}/*移至相应工具条*/
		ax(13);/*取消勾选相应工具条*/Sleep(90);
	}
	dj;/*打开“视图”*/pi;
	fora(i,1,2){ax(40);Sleep(100);}/*移至“状态条”*/
	ax(13);/*取消勾选“状态条”*/Sleep(100);
	move(345,30);/*移至“工具”*/pi;
	dj;/*打开 “工具”*/pi;
	fora(i,1,3){ax(40);Sleep(80);}/*移至“编译器选项”*/
	ax(13);/*移至“编译器选项”*/Sleep(100);
	fora(i,1,30){ax(9);Sleep(80);}/*移至“基本”*/
	ax(39);/*移至“显示”*/Sleep(80);
	ax(9);/*移至“字体”*/Sleep(80);
	ax(38);/*移至“Comic MS”*/Sleep(80);
	ax(9);/*移至“字号”*/Sleep(80);
	fora(i,1,2){ax(40);Sleep(80);}/*调整“字号”*/
	fora(i,1,8){ax(9);Sleep(80);}/*移至“确定”*/
	ax(13);/*点击“确定”*/
	move(161,540);/*移至“项目管理”边缘*/pi;
	mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);/*按住“项目管理”边缘*/pi;
	move(1230,540);/*调整“项目管理”边缘*/pi;
	mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);/*放开“项目管理”边缘*/pi;
	//
	rt 0;
}
