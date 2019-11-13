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
#define ddj dj;Sleep(90);dj
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
	system("start F://LPH/工具/Listary");/*重启“Listary”*/Sleep(4500);
	move(980,540);/*移至“Language”*/Sleep(400);
	dj;/*打开“Language”*/pi;
	move(980,990);/*移至“”*/pi;Sleep(800);
	dj;/*点击“简体中文”*/pi;
	move(785,625);/*移至“不，谢谢”*/Sleep(200);
	dj;/*点击“不，谢谢”*/Sleep(900);
	//
	move(80,1080);/*移至“Windows资源管理器”*/Sleep(200);
	rdj;/*右键“Windows资源管理器”*/Sleep(200);
	move(100,1015);/*移至“关闭窗口”*/pi;
	dj;/*点击“关闭窗口”*/Sleep(800);
	move(80,1080);/*移至“Windows资源管理器”*/Sleep(200);
	dj;/*打开“Windows资源管理器”*/Sleep(500);
	fora(i,1,4){ax(9);Sleep(140);}/*移至“导航窗格”*/
	ax(37);/*关闭“库”*/
	fora(i,1,5){ax(40);Sleep(140);}/*移至“F:”*/
	ax(39);/*打开“F:”*/Sleep(140);
	fora(i,1,2){ax(40);Sleep(140);}/*移至“LPH”*/
	ax(13);/*打开“LPH”*/Sleep(140);
	move(1475,715);/*移至主窗格空白区域*/pi;
	ddj;/*打开Listary“收藏”*/Sleep(140);
	ax(13);/*移至“添加”*/Sleep(140);
	ax(13);/*点击“添加”*/Sleep(140);
	ax(13);/*确认添加*/Sleep(140);
	move(410,275);/*移至“导航窗格”空白区域*/pi;
	dj;/*点击“导航窗格”空白区域*/pi;
	ax(39);/*打开“LPH”*/Sleep(200);
	//
	fora(i,1,2){ax(40);Sleep(140);}/*移至“安装包”*/
	ax(13);/*打开“安装包”*/Sleep(140);
	move(1475,715);/*移至主窗格空白区域*/pi;
	ddj;/*打开Listary“收藏”*/Sleep(140);
	ax(13);/*移至“添加”*/Sleep(140);
	ax(13);/*点击“添加”*/Sleep(140);
	ax(13);/*确认添加*/Sleep(140);
	move(410,275);/*移至“导航窗格”空白区域*/pi;
	dj;/*点击“导航窗格”空白区域*/pi;
	//
	ax(40);/*移至“程序”*/Sleep(140);
	ax(13);/*打开“安装包”*/Sleep(140);
	move(1475,715);/*移至主窗格空白区域*/pi;
	ddj;/*打开Listary“收藏”*/Sleep(140);
	ax(13);/*移至“添加”*/Sleep(140);
	ax(13);/*点击“添加”*/Sleep(140);
	ax(13);/*确认添加*/Sleep(140);
	move(410,275);/*移至“导航窗格”空白区域*/pi;
	dj;/*点击“导航窗格”空白区域*/pi;
	//
	ax(40);/*移至“工具”*/Sleep(140);
	ax(13);/*打开“安装包”*/Sleep(140);
	move(1475,715);/*移至主窗格空白区域*/pi;
	ddj;/*打开Listary“收藏”*/Sleep(140);
	ax(13);/*移至“添加”*/Sleep(140);
	ax(13);/*点击“添加”*/Sleep(140);
	ax(13);/*确认添加*/Sleep(140);
	move(410,275);/*移至“导航窗格”空白区域*/pi;
	dj;/*点击“导航窗格”空白区域*/pi;
	//
	ax(40);/*移至“其它”*/Sleep(140);
	ax(13);/*打开“安装包”*/Sleep(140);
	move(1475,715);/*移至主窗格空白区域*/pi;
	ddj;/*打开Listary“收藏”*/Sleep(140);
	ax(13);/*移至“添加”*/Sleep(140);
	ax(13);/*点击“添加”*/Sleep(140);
	ax(13);/*确认添加*/Sleep(140);
	move(410,275);/*移至“导航窗格”空白区域*/pi;
	dj;/*点击“导航窗格”空白区域*/pi;
	//
	fora(i,1,2){ax(40);Sleep(140);}/*移至“文档”*/
	ax(13);/*打开“安装包”*/Sleep(140);
	move(1475,715);/*移至主窗格空白区域*/pi;
	ddj;/*打开Listary“收藏”*/Sleep(140);
	ax(13);/*移至“添加”*/Sleep(140);
	ax(13);/*点击“添加”*/Sleep(140);
	ax(13);/*确认添加*/Sleep(140);
	move(1515,175);/*移至资源管理器右上“×”*/pi;
	dj;/*点击资源管理器右上“×”*/
	//
	rt 0;
}
