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
const string model[10]={"","### [","](https://www.luogu.org/discuss/show/",")  "};

string goaluid,dqstr,dquid;
tni dql,pyinhao[10];

inl string findsonstringbyyinhao(string str,tni k);
inl void FindYinhao(string str,tni ans[]);
inl string miswrk(string str);
inl string unlock(string locstr);

tni main()
{
	getline(cin,goaluid);
	//
	freopen("alldiscuss.LDBS","r",stdin);
	freopen("Sousuoer's result.md","w",stdout);
	//
	while(getline(cin,dqstr))
	{
		dqstr=unlock(dqstr);
		//
		FindYinhao(dqstr,pyinhao);
		//
		dquid=dqstr.substr(pyinhao[5]+1,pyinhao[6]-pyinhao[5]-1);
		if(dquid.compare(goaluid))
		{
			con;
		}
		//
		dqstr=model[1]+findsonstringbyyinhao(dqstr,2)+model[2]+findsonstringbyyinhao(dqstr,1)+model[3];
		//
		dqstr=miswrk(dqstr);
		//
		cout<<dqstr<<endl;
	}
	//
	rt 0;
}

inl string findsonstringbyyinhao(string str,tni k)
{
	tni p1=0,p2=0;
	//
	if(k==1)
	{
		p1=pyinhao[1];
		p2=pyinhao[2];
	}
	else if(k==2)
	{
		p1=pyinhao[3];
		p2=pyinhao[4];
	}
	else if(k==3)
	{
		p1=pyinhao[5];
		p2=pyinhao[6];
	}
	//
	rt str.substr(p1+1,p2-p1-1);
}

inl void FindYinhao(string str,tni ans[])
{
	tni lsp=0,dql=str.size()-1;
	//
	fora(i,0,dql)
	{
		if(str[i]=='"')
		{
			ans[++lsp]=i;
		}
		if(lsp>=3)
		{
			br;
		}
	}
	//
	lsp=7;
	forb(i,dql,0)
	{
		if(str[i]=='"')
		{
			ans[--lsp]=i;
		}
		if(lsp<=4)
		{
			br;
		}
	}
}

inl string miswrk(string str)
{
	string god=str;
	tni ls;
	//
	ls=god.find("&quot;");
	while(ls>=0)
	{
		god.replace(ls,6,"\"");
		ls=god.find("&quot;");
	}
	//
	rt god;
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
