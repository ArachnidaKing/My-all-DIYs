#include<windows.h> 

HWND MAINHWND;

LRESULT CALLBACK WndProc(HWND hwnd,UINT Message,WPARAM wParam,LPARAM lParam);

int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow)
{
	
	
	WNDCLASSEX wc;
	HWND hwnd;
	MSG Msg;

	memset(&wc,0,sizeof(wc));
	wc.cbSize=sizeof(WNDCLASSEX);
	wc.lpfnWndProc=WndProc; /* insert window procedure function here */
	wc.hInstance=hInstance;
	wc.hCursor=LoadCursor(NULL, IDC_ARROW);
	wc.hbrBackground=(HBRUSH)(COLOR_WINDOW+1);
	wc.lpszClassName="WindowClass";
	wc.hIcon=LoadIcon(NULL, IDI_APPLICATION); /* use "A" as icon name when you want to use the project icon */
	wc.hIconSm=LoadIcon(NULL, IDI_APPLICATION); /* as above */

	if(!RegisterClassEx(&wc))
	{
		MessageBox(NULL,"Window Registration Failed!","Error!",MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}

	hwnd=CreateWindowEx(WS_EX_CLIENTEDGE,"WindowClass","Caption",/*WS_VISIBLE|*/WS_OVERLAPPEDWINDOW,CW_USEDEFAULT,CW_USEDEFAULT,450,310,NULL,NULL,hInstance,NULL);
	MAINHWND=hwnd;
	ShowWindow(MAINHWND,1);//0隐藏，1显示窗口,2最小化,3最大化 
	
	char cmdtitle[256];
	GetConsoleTitle(cmdtitle,256);
	HWND cmd=FindWindow(NULL,cmdtitle);
	ShowWindow(cmd,0);
	
	if(hwnd==NULL)
	{
		MessageBox(NULL,"Window Creation Failed!","Error!",MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}

	while(GetMessage(&Msg,NULL,0,0)>0)
	{
		TranslateMessage(&Msg);
		DispatchMessage(&Msg);
	}
	//
	return Msg.wParam;
}


      
LRESULT CALLBACK WndProc(HWND hwnd,UINT Message,WPARAM wParam,LPARAM lParam)
{
	switch(Message)
	{
		case WM_CREATE:
			{
				break;
			}
		case WM_DESTROY:
			{
				PostQuitMessage(0);
				break;
			}
		default:
			{
				return DefWindowProc(hwnd,Message,wParam,lParam);
			}
	}
	return 0;
}
