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
	move(25,1060);/*移至Win*/pi;
	dj;/*打开“开始”菜单*/pi;
	move(270,800);/*移至“控制面板”*/pi;
	dj;/*打开“控制面板”*/Sleep(400);
	move(720,495);/*移至“硬件和声音”*/Sleep(400);
	dj;/*打开“硬件和声音”*/pi;
	move(800,310);/*移至“鼠标”*/Sleep(400);
	dj;/*打开“鼠标”*/Sleep(400);
	fora(i,1,5){ax(9);Sleep(80);}/*移至菜单栏*/
	fora(i,1,2){ax(39);Sleep(80);}/*移至“指针选项”*/
	ax(9);/*移至“选择指针移动速度”*/Sleep(80);
	fora(i,1,4){ax(39);Sleep(80);}/*提高指针移动速度*/
	fora(i,1,9){ax(9);Sleep(80);}/*移至菜单栏*/
	ax(39);/*移至“滚轮”*/Sleep(100);
	fora(i,1,2){ax(9);Sleep(80);}/*移至“一次滚动下列行数”*/
	ax(40);/*调整一次滚动行数*/Sleep(80);
	fora(i,1,2){ax(9);Sleep(80);}/*移至“确定”*/
	ax(13);/*点击“确定”*/Sleep(2000);
	move(1540,200);/*移至“×”*/pi;
	dj;/*点击“×”*/Sleep(500);
	//
	move(90,1060);/*移至任务栏（第1项）*/pi;
	rdj;/*右键任务栏（第1项）*/Sleep(450);
	ax(38);/*移至“关闭窗口”*/Sleep(80);
	ax(13);/*点击“关闭窗口”*/Sleep(80);
	move(90,1060);/*移至任务栏（第1项）*/pi;
	rdj;/*右键任务栏（第1项）*/Sleep(450);
	ax(38);/*移至“将此任务从任务栏解锁”*/Sleep(80);
	ax(13);/*点击“将此任务从任务栏解锁”*/Sleep(80);
	move(150,1060);/*移至任务栏（第2项）*/pi;
	rdj;/*右键任务栏（第2项）*/Sleep(450);
	ax(38);/*移至“将此任务从任务栏解锁”*/Sleep(80);
	ax(13);/*点击“将此任务从任务栏解锁”*/Sleep(80);
	//
	rt 0;
}
