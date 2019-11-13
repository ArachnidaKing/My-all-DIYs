#include <windows.h>
#include <winable.h>
#include<bits/stdc++.h>
using namespace std;

HWND hwnd;

int main()  
{  
	char str[256];
	GetConsoleTitle(str,sizeof(str));
	hwnd=FindWindow(NULL,str);
	//
    FreeConsole();
    ShowWindow(hwnd,0);
    while(1)
    {
		//BlockInput(true);  
    }
    //
    return 0;
}  
