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
	ShowWindow(hwnd,0);//���ؿ���̨
	Sleep(100);
	//
	move(0,275);/*��������ͼ�����Ͻ�*/pi;
	mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);/*��ס���*/pi;
	move(80,480);/*��������ͼ�����½�*/pi;
	mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);/*�ſ����*/pi;
	keybd_event(VK_DELETE,0,1,0);/*ɾ������ͼ��*/Sleep(200);
	ax(13);/*������ǡ�*/Sleep(500);
	move(0,690);/*��������ͼ�����Ͻ�*/pi;
	mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);/*��ס���*/pi;
	move(75,860);/*��������ͼ�����½�*/pi;
	mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);/*�ſ����*/pi;
	keybd_event(VK_DELETE,0,1,0);/*ɾ������ͼ��*/Sleep(200);
	ax(13);/*������ǡ�*/Sleep(500);
	//
	move(1060,1060);/*��������������*/pi;
	rdj;/*�Ҽ�������*/pi;
	ax(82);/*�򿪡����ԡ�*/Sleep(200);
	ax(40);/*�������Զ�������������*/Sleep(80);
	keybd_event(VK_ADD,0,1,0);/*��ѡ���Զ�������������*/Sleep(80);
	ax(40);/*������ʹ��Сͼ�ꡱ*/Sleep(80);
	keybd_event(VK_ADD,0,1,0);/*��ѡ��ʹ��Сͼ�ꡱ*/Sleep(80);
	fora(i,1,6){ax(9);Sleep(100);}/*������ȷ����*/
	ax(13);/*�����ȷ����*/
	//
	rt 0;
}
