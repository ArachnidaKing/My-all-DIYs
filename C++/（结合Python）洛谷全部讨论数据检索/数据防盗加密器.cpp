#include<bits/stdc++.h>
#include<ctime>
#define sacnf scanf
#define scnaf scanf
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
typedef int itn,nti,tin,tni,nit;
using namespace std;

string unlocstr,locstr;
tin dql;

inl tni sj(tni sj_a,tni sj_b);

tni main()
{
	freopen("data.txt","r",stdin);
	freopen("alldiscuss.LDBS","w",stdout);
	//
	while(getline(cin,unlocstr))
	{
		locstr.clear();
		//
		dql=unlocstr.size();
		--dql;
		//
		fora(i,0,dql)
		{
			locstr+=char(sj(128,255));
			locstr+=unlocstr[i];
		}
		//
		cout<<locstr<<endl;
	}
	//
	rt 0;
}

inl tni sj(tni sj_a,tni sj_b)
{
	if(sj_a>sj_b)
	{
		rt rand()%(sj_a-sj_b+1)+sj_b;
	}
	else
	{
		rt rand()%(sj_b-sj_a+1)+sj_a;
	}
}
