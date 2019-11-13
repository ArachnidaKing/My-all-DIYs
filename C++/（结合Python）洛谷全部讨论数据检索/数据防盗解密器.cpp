#include<bits/stdc++.h>
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

string lockl,unlockl;
tni dql;

inl string unlock(string locstr);

tni main()
{
	freopen("alldiscuss2.LDBS","r",stdin);
	freopen("alldiscuss2.UDBS","w",stdout);
	//
	while(getline(cin,lockl))
	{
//		unlockl.clear();
//		//
//		dql=lockl.size();
//		--dql;
//		fora(i,0,dql)
//		{
//			if(i&1)
//			{
//				unlockl+=lockl[i];
//			}
//		}
		//
		cout<<unlock(lockl)<<endl;
	}
	//
	rt 0;
}

inl string unlock(string locstr)
{
	string unlocstr;
	tni dql=locstr.size()-1;
	//
	fora(i,0,dql)
	{
		if(i&1)
		{
			unlocstr+=locstr[i];
		}
	}
	//
	rt unlocstr;
}
//&quot;="
