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
	move(40,625);/*������Dev-C++��*/pi;
	mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);/*��ס��Dev-C++��*/Sleep(100);
	move(960,1080);/*����������*/pi;
	mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);/*�ſ���Dev-C++��*/Sleep(100);
	move(170,1080);/*��������������3�*/pi;
	dj;/*�򿪡�Dev-C++��*/Sleep(500);
	ax(13);/*���ܵı���*/Sleep(500);
	move(1380,360);/*������Dev-C++��������*/pi;
	dj;pi;dj;/*��󻯡�Dev-C++��*/Sleep(100);
	move(810,55);/*��������������*/pi;
	dj;/*�򿪡���������*/pi;
	move(810,85);/*������64-bit Debug��*/pi;
	dj;/*�����64-bit Debug��*/pi;
	move(185,30);/*��������ͼ��*/pi;
	fora(i,1,8)
	{
		dj;/*�򿪡���ͼ��*/pi;
		fora(j,1,3){ax(40);Sleep(90);}/*��������������*/
		ax(39);/*�򿪡���������*/Sleep(90);
		fora(j,2,i){ax(40);Sleep(90);}/*������Ӧ������*/
		ax(13);/*ȡ����ѡ��Ӧ������*/Sleep(90);
	}
	dj;/*�򿪡���ͼ��*/pi;
	fora(i,1,2){ax(40);Sleep(100);}/*������״̬����*/
	ax(13);/*ȡ����ѡ��״̬����*/Sleep(100);
	move(345,30);/*���������ߡ�*/pi;
	dj;/*�� �����ߡ�*/pi;
	fora(i,1,3){ax(40);Sleep(80);}/*������������ѡ�*/
	ax(13);/*������������ѡ�*/Sleep(100);
	fora(i,1,30){ax(9);Sleep(80);}/*������������*/
	ax(39);/*��������ʾ��*/Sleep(80);
	ax(9);/*���������塱*/Sleep(80);
	ax(38);/*������Comic MS��*/Sleep(80);
	ax(9);/*�������ֺš�*/Sleep(80);
	fora(i,1,2){ax(40);Sleep(80);}/*�������ֺš�*/
	fora(i,1,8){ax(9);Sleep(80);}/*������ȷ����*/
	ax(13);/*�����ȷ����*/
	move(161,540);/*��������Ŀ������Ե*/pi;
	mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);/*��ס����Ŀ������Ե*/pi;
	move(1230,540);/*��������Ŀ������Ե*/pi;
	mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);/*�ſ�����Ŀ������Ե*/pi;
	//
	rt 0;
}
