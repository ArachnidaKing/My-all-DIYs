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
	ShowWindow(hwnd,0);//���ؿ���̨
	Sleep(100);
	//
	system("start F://LPH/��װ��/QQ.exe");/*�򿪡�QQ����װ��*/pi;
	move(1150,730);/*�������Զ���ѡ�*/Sleep(3000);
	dj;/*������Զ���ѡ�*/pi;
	move(820,730);/*���������ɿ�ݷ�ʽ��*/Sleep(100);
	dj;/*ȡ����ѡ�����ɿ�ݷ�ʽ��*/pi;
	move(1000,730);/*��������ӵ�������������*/Sleep(100);
	dj;/*ȡ����ѡ����ӵ�������������*/pi;
	move(810,830);/*�������Զ��塱*/Sleep(100);
	dj;/*������Զ��塱*/Sleep(80);
	move(1115,860);/*�����������*/pi;
	dj;/*�򿪡��Զ��塱*/Sleep(500);
	fora(i,1,2){ax(9);Sleep(100);}/*����Ŀ¼*/
	fora(i,1,3){ax(40);Sleep(100);}/*����F��*/
	ax(39);/*��F��*/Sleep(100);
	fora(i,1,2){ax(40);Sleep(100);}/*������LPH��*/
	ax(39);/*�򿪡�LPH��*/Sleep(100);
	ax(40);/*������QQ��*/Sleep(100);
	fora(i,1,2){ax(9);Sleep(100);}/*������ȷ����*/
	ax(13);/*�����ȷ����*/Sleep(100);
	move(960,640);/*������������װ��*/pi;
	dj;/*�����������װ��*/Sleep(50000);
	move(960,700);/*��������ɰ�װ��*/pi;
	dj;/*�������ɰ�װ��*/Sleep(12000);
	move(1155,390);/*����������*/pi;
	dj;/*���������*/Sleep(1000);
	//
	system("start F://LPH/��װ��/QQBrowser10.3.exe");/*�򿪡�QQ���������װ��*/pi;
	move(1090,785);/*�������Զ��尲װ��*/Sleep(450);
	dj;/*�򿪡��Զ��尲װ��*/pi;
	move(860,740);/*��������������ͼ�ꡱ*/pi;
	dj;/*ȡ����ѡ����������ͼ�ꡱ*/pi;
	move(960,600);/*��������װ��*/pi;
	dj;/*�������װ��*/Sleep(30000);
	move(1920,0);/*����������*/pi;
	dj;/*���������*/pi;
	move(885,585);/*������ȷ����*/pi;
	dj;/*�����ȷ����*/
	//
	rt 0;
}
