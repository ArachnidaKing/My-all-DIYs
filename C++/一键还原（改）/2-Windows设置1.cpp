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
	move(25,1060);/*����Win*/pi;
	dj;/*�򿪡���ʼ���˵�*/pi;
	move(270,800);/*������������塱*/pi;
	dj;/*�򿪡�������塱*/Sleep(400);
	move(720,495);/*������Ӳ����������*/Sleep(400);
	dj;/*�򿪡�Ӳ����������*/pi;
	move(800,310);/*��������ꡱ*/Sleep(400);
	dj;/*�򿪡���ꡱ*/Sleep(400);
	fora(i,1,5){ax(9);Sleep(80);}/*�����˵���*/
	fora(i,1,2){ax(39);Sleep(80);}/*������ָ��ѡ�*/
	ax(9);/*������ѡ��ָ���ƶ��ٶȡ�*/Sleep(80);
	fora(i,1,4){ax(39);Sleep(80);}/*���ָ���ƶ��ٶ�*/
	fora(i,1,9){ax(9);Sleep(80);}/*�����˵���*/
	ax(39);/*���������֡�*/Sleep(100);
	fora(i,1,2){ax(9);Sleep(80);}/*������һ�ι�������������*/
	ax(40);/*����һ�ι�������*/Sleep(80);
	fora(i,1,2){ax(9);Sleep(80);}/*������ȷ����*/
	ax(13);/*�����ȷ����*/Sleep(2000);
	move(1540,200);/*����������*/pi;
	dj;/*���������*/Sleep(500);
	//
	move(90,1060);/*��������������1�*/pi;
	rdj;/*�Ҽ�����������1�*/Sleep(450);
	ax(38);/*�������رմ��ڡ�*/Sleep(80);
	ax(13);/*������رմ��ڡ�*/Sleep(80);
	move(90,1060);/*��������������1�*/pi;
	rdj;/*�Ҽ�����������1�*/Sleep(450);
	ax(38);/*���������������������������*/Sleep(80);
	ax(13);/*��������������������������*/Sleep(80);
	move(150,1060);/*��������������2�*/pi;
	rdj;/*�Ҽ�����������2�*/Sleep(450);
	ax(38);/*���������������������������*/Sleep(80);
	ax(13);/*��������������������������*/Sleep(80);
	//
	rt 0;
}
