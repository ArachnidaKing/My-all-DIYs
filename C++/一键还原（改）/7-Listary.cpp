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
	ShowWindow(hwnd,0);//���ؿ���̨
	Sleep(100);
	//
	system("start F://LPH/����/Listary");/*������Listary��*/Sleep(4500);
	move(980,540);/*������Language��*/Sleep(400);
	dj;/*�򿪡�Language��*/pi;
	move(980,990);/*��������*/pi;Sleep(800);
	dj;/*������������ġ�*/pi;
	move(785,625);/*����������лл��*/Sleep(200);
	dj;/*���������лл��*/Sleep(900);
	//
	move(80,1080);/*������Windows��Դ��������*/Sleep(200);
	rdj;/*�Ҽ���Windows��Դ��������*/Sleep(200);
	move(100,1015);/*�������رմ��ڡ�*/pi;
	dj;/*������رմ��ڡ�*/Sleep(800);
	move(80,1080);/*������Windows��Դ��������*/Sleep(200);
	dj;/*�򿪡�Windows��Դ��������*/Sleep(500);
	fora(i,1,4){ax(9);Sleep(140);}/*��������������*/
	ax(37);/*�رա��⡱*/
	fora(i,1,5){ax(40);Sleep(140);}/*������F:��*/
	ax(39);/*�򿪡�F:��*/Sleep(140);
	fora(i,1,2){ax(40);Sleep(140);}/*������LPH��*/
	ax(13);/*�򿪡�LPH��*/Sleep(140);
	move(1475,715);/*����������հ�����*/pi;
	ddj;/*��Listary���ղء�*/Sleep(140);
	ax(13);/*��������ӡ�*/Sleep(140);
	ax(13);/*�������ӡ�*/Sleep(140);
	ax(13);/*ȷ�����*/Sleep(140);
	move(410,275);/*�������������񡱿հ�����*/pi;
	dj;/*������������񡱿հ�����*/pi;
	ax(39);/*�򿪡�LPH��*/Sleep(200);
	//
	fora(i,1,2){ax(40);Sleep(140);}/*��������װ����*/
	ax(13);/*�򿪡���װ����*/Sleep(140);
	move(1475,715);/*����������հ�����*/pi;
	ddj;/*��Listary���ղء�*/Sleep(140);
	ax(13);/*��������ӡ�*/Sleep(140);
	ax(13);/*�������ӡ�*/Sleep(140);
	ax(13);/*ȷ�����*/Sleep(140);
	move(410,275);/*�������������񡱿հ�����*/pi;
	dj;/*������������񡱿հ�����*/pi;
	//
	ax(40);/*����������*/Sleep(140);
	ax(13);/*�򿪡���װ����*/Sleep(140);
	move(1475,715);/*����������հ�����*/pi;
	ddj;/*��Listary���ղء�*/Sleep(140);
	ax(13);/*��������ӡ�*/Sleep(140);
	ax(13);/*�������ӡ�*/Sleep(140);
	ax(13);/*ȷ�����*/Sleep(140);
	move(410,275);/*�������������񡱿հ�����*/pi;
	dj;/*������������񡱿հ�����*/pi;
	//
	ax(40);/*���������ߡ�*/Sleep(140);
	ax(13);/*�򿪡���װ����*/Sleep(140);
	move(1475,715);/*����������հ�����*/pi;
	ddj;/*��Listary���ղء�*/Sleep(140);
	ax(13);/*��������ӡ�*/Sleep(140);
	ax(13);/*�������ӡ�*/Sleep(140);
	ax(13);/*ȷ�����*/Sleep(140);
	move(410,275);/*�������������񡱿հ�����*/pi;
	dj;/*������������񡱿հ�����*/pi;
	//
	ax(40);/*������������*/Sleep(140);
	ax(13);/*�򿪡���װ����*/Sleep(140);
	move(1475,715);/*����������հ�����*/pi;
	ddj;/*��Listary���ղء�*/Sleep(140);
	ax(13);/*��������ӡ�*/Sleep(140);
	ax(13);/*�������ӡ�*/Sleep(140);
	ax(13);/*ȷ�����*/Sleep(140);
	move(410,275);/*�������������񡱿հ�����*/pi;
	dj;/*������������񡱿հ�����*/pi;
	//
	fora(i,1,2){ax(40);Sleep(140);}/*�������ĵ���*/
	ax(13);/*�򿪡���װ����*/Sleep(140);
	move(1475,715);/*����������հ�����*/pi;
	ddj;/*��Listary���ղء�*/Sleep(140);
	ax(13);/*��������ӡ�*/Sleep(140);
	ax(13);/*�������ӡ�*/Sleep(140);
	ax(13);/*ȷ�����*/Sleep(140);
	move(1515,175);/*������Դ���������ϡ�����*/pi;
	dj;/*�����Դ���������ϡ�����*/
	//
	rt 0;
}
