#include<iostream>
#include<cmath>
#include<cstdio>
#include<windows.h>
#include<ctime>
using namespace std;

int sj(int a,int b)
{
	srand((unsigned)time(NULL)+rand());
	return rand()%(b-a+1)+a;
} 

void jz()
{
	int a=1;
	int jindu;
	while(1)
	{
		jindu=sj(1,30);
		printf("%d%%\r",a);
		Sleep(sj(50,1500));
		a+=jindu;
		if(a>=100)
		{
			printf("100%%\r");
			break;
		}
	}
}

int main()
{
	freopen("in.txt","r",stdin);
	printf("                正在载入小编生成器            v1.2.1");
	printf("\n");
	Sleep(100);
	jz();
	printf("加载完成，正在进入。。。");
	Sleep(sj(100,3000));
	//
	int a,b,c,d,na,nb,nc,nd;
	cin>>na>>nb>>nc>>nd;
	string qiyin[na];
	string jingguo[nb];
	string shijian[nc];
	string jieguo[nd];
	//
	for(int i=0;i<na;i++)
	{
		cin>>qiyin[i];
	}
	for(int i=0;i<nb;i++)
	{
		cin>>jingguo[i];
	}
	for(int i=0;i<nc;i++)
	{
		cin>>shijian[i];
	}
	for(int i=0;i<nd;i++)
	{
		cin>>jieguo[i];
	}
	//
	while(1)
	{
		a=sj(0,na-1);
		b=sj(0,nb-1);
		c=sj(0,nc-1);
		d=sj(0,nd-1);
		getchar();
		system("cls");
		printf("                       《小编生成器》          v1.2.1\n");
		cout<<qiyin[a];
		Sleep(1000);
		cout<<jingguo[b];
		Sleep(1000);
		cout<<shijian[c];
		Sleep(800);
		cout<<jieguo[d];
		Sleep(3000);
		cout<<endl;
	}
	return 0;
}
