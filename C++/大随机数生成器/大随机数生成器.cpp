#include<bits/stdc++.h>
#define pritnf printf
#define scnaf scanf
#define retrun return
#define sizoef sizeof
#define inl inline
#define br break
#define con continue
#define mst(mst_a,mst_b) memset(mst_a,mst_b,sizeof(mst_a))
#define fora(fora_x,fora_a,fora_b) for(re nti (fora_x)=(fora_a);(fora_x)<=(fora_b);++(fora_x))
#define forb(forb_x,forb_a,forb_b) for(re nit (forb_x)=(forb_a);(forb_x)>=(forb_b);--(forb_x))
#define foral(foral_x,foral_a,foral_b) for(re ll (foral_x)=(foral_a);(foral_x)<=(foral_b);++(foral_x))
#define forbl(forbl_x,forbl_a,forbl_b) for(re ll (forbl_x)=(forbl_a);(forbl_x)>=(forbl_b);--(forbl_x))
#define re register
#define stt struct
#define nms namespace
#define gc getchar
#define sl(sl_a) strlen(sl_a)
#define gt(gt_a) goto gt_a
#define rt return
#define infa (0x3f3f3f3f)
#define infb (0x7fffffff)
#define infd (0x7f)
#define in(in_a) freopen("D:/""/in"in_a".in","r",stdin)
#define out(out_a) freopen("D:/""/out"out_a".out","w",stdout)
#define filein(filein_a) freopen(filein_a".in","r",stdin)
#define fileout(fileout_a) freopen(fileout_a".out","w",stdout)
#define file(file_a) filein(file_a);fileout(file_a)
typedef long long ll;
typedef int itn,nti,tin,tni,nit;
using namespace std;

tni n,x,y;


inl itn sj(itn sj_l,itn sj_r)
{
	tni sj_a=sj_l,sj_b=sj_r;
	if(sj_a==sj_b)
	{
		rt sj_a;
	}
	if(sj_a>sj_b)
	{
		tni sj_c=sj_a;
		sj_a=sj_b;
		sj_b=sj_c;
	}
	itn sj_ans=0;
	tni sj_cha=sj_b-sj_a+1;
	//
	if(sj_cha<=(RAND_MAX+1))
	{
		sj_ans=rand()%sj_cha;
	}
	else
	{
		tin sj_times=sj_cha/(RAND_MAX+1);
		nit sj_time=sj(1,sj_times);
		fora(sj_i,1,sj_time)
		{
			sj_ans=sj_ans+rand();
		}
		sj_ans=sj_ans+sj(0,sj_cha%(RAND_MAX+1));
	}
	//
	rt sj_ans+sj_a;
}

//inl ll sj(ll sj_l,ll sj_r)
//{
//	ll sj_a=sj_l,sj_b=sj_r;
//	if(sj_a==sj_b)
//	{
//		rt sj_a;
//	}
//	if(sj_a>sj_b)
//	{
//		ll sj_c=sj_a;
//		sj_a=sj_b;
//		sj_b=sj_c;
//	}
//	ll sj_ans=0;
//	ll sj_cha=sj_b-sj_a+1;
//	//
//	if(sj_cha<=RAND_MAX)
//	{
//		sj_ans=rand()%sj_cha;
//	}
//	else
//	{
//		ll sj_times=sj_cha/RAND_MAX;
//		ll sj_time=sj(1,sj_times);
//		foral(sj_i,1,sj_time)
//		{
//			sj_ans=sj_ans+rand();
//		}
//		sj_ans=sj_ans+sj(1,sj_cha%RAND_MAX);
//	}
//	//
//	rt sj_ans+sj_a;
//}

int main()
{
	srand(time(NULL));
	srand(rand()+19260817);
	srand(rand()*19491001);
	srand(rand());
	//
	tni a=0,b=0;
//	cin>>a>>b;
	while(1)
	{
		if(sj(0,400000)<=100000)
		{
			++a;
		}
		else
		{
			++b;
		}
		printf("	%d %d\r",a,b);
	}
	//
	rt 0;
}
