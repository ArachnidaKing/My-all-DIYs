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

#define dj mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);Sleep(15);mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0)
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
	system("start F://LPH/安装包/QQ.exe");/*打开“QQ”安装包*/pi;
	move(1150,730);/*移至“自定义选项”*/Sleep(3000);
	dj;/*点击“自定义选项”*/pi;
	move(820,730);/*移至“生成快捷方式”*/Sleep(100);
	dj;/*取消勾选“生成快捷方式”*/pi;
	move(1000,730);/*移至“添加到快速启动栏”*/Sleep(100);
	dj;/*取消勾选“添加到快速启动栏”*/pi;
	move(810,830);/*移至“自定义”*/Sleep(100);
	dj;/*点击“自定义”*/Sleep(80);
	move(1115,860);/*移至“浏览”*/pi;
	dj;/*打开“自定义”*/Sleep(500);
	fora(i,1,2){ax(9);Sleep(100);}/*移至目录*/
	fora(i,1,3){ax(40);Sleep(100);}/*移至F盘*/
	ax(39);/*打开F盘*/Sleep(100);
	fora(i,1,2){ax(40);Sleep(100);}/*移至“LPH”*/
	ax(39);/*打开“LPH”*/Sleep(100);
	ax(40);/*移至“QQ”*/Sleep(100);
	fora(i,1,2){ax(9);Sleep(100);}/*移至“确定”*/
	ax(13);/*点击“确定”*/Sleep(100);
	move(960,640);/*移至“立即安装”*/pi;
	dj;/*点击“立即安装”*/Sleep(50000);
	move(960,700);/*移至“完成安装”*/pi;
	dj;/*点击“完成安装”*/Sleep(12000);
	move(1155,390);/*移至“×”*/pi;
	dj;/*点击“×”*/Sleep(1000);
	//
	system("start F://LPH/安装包/QQBrowser10.3.exe");/*打开“QQ浏览器”安装包*/pi;
	move(1090,785);/*移至“自定义安装”*/Sleep(450);
	dj;/*打开“自定义安装”*/pi;
	move(860,740);/*移至“创建桌面图标”*/pi;
	dj;/*取消勾选“创建桌面图标”*/pi;
	move(960,600);/*移至“安装”*/pi;
	dj;/*点击“安装”*/Sleep(30000);
	move(1920,0);/*移至“×”*/pi;
	dj;/*点击“×”*/pi;
	move(885,585);/*移至“确定”*/pi;
	dj;/*点击“确定”*/
	//
	rt 0;
}
