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
#define move(move_a,move_b) SetCursorPos(move_a,move_b)
#define ax(ax_a) keybd_event(ax_a,0,1,0)
#define jcax(jcax_a) GetAsyncKeyState(jcax_a)&0x8000
#define S(S_a) Sleep(S_a)
#define pi Sleep(20);if(key){return 0;}

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
	move(25,970);/*移至“所有程序*/pi;
	dj;/*打开”所有程序*/Sleep(500);
	move(45,820);/*移至“360安全中心”*/Sleep(350);
	dj;/*打开“360安全中心”*/pi;
	move(45,855);/*移至“360杀毒”*/pi;
	dj;/*打开“360杀毒”*/pi;
	move(45,920);/*移至“卸载360杀毒”*/pi;
	dj;/*点击“卸载360杀毒”*/Sleep(3000);
	move(685,710);/*移至“保留隔离的病毒文件”*/pi;
	dj;/*取消“保留隔离的病毒文件”*/pi;
	move(845,710);/*移至“反馈您的卸载原因”*/pi;
	dj;/*取消“反馈您的卸载原因”*/pi;
	move(1120,710);pi;/*移至“确认卸载”*/
	dj;/*点击“确认卸载”*/Sleep(6000);
	move(1140,635);/*移至“稍后重启”*/pi;
	dj;/*点击“稍后重启”*/
	//
	Sleep(1000);
	//
	move(25,1060);/*移至Win*/pi;
	dj;/*打开“开始”菜单*/pi;
	move(25,970);/*移至“所有程序*/pi;
	dj;/*打开”所有程序*/Sleep(500);
	move(45,820);/*移至“360安全中心”*/Sleep(350);
	dj;/*打开“360安全中心”*/pi;
	move(45,840);/*移至“360安全浏览器”（已打开）*/Sleep(350);
	move(45,900);/*移至“卸载360安全浏览器”*/pi;
	dj;/*点击“卸载360安全浏览器”*/Sleep(1500);
	move(1040,620);/*移至“开始卸载”*/pi;
	dj;/*点击“开始卸载”*/
	//
	rt 0;
}
