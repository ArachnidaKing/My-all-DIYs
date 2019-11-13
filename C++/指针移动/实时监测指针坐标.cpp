#include<bits/stdc++.h>
#include<windows.h>
#define itn int
#define tin int
#define tni int
#define nit int
#define nti int
using namespace std;

#define dd GetCursorPos(&p)

POINT p;

void oca()
{
	while(1)
	{
		dd;
		printf("%d %d       \r",p.x,p.y);
	}
	return;
}

itn main()
{
	oca();
	return 0;
}
