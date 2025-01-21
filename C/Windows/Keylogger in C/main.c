#include <windows.h>
#include <stdio.h>

LRESULT hook_Proc(int code, WPARAM WParam, LPARAM LParam)
{

	//Log keyboard events
	printf("Key was pressed!\n");

}


int main()
{

	SetWindwHookExA(WH_KEYBOARD_LL, hook_Proc, NULL, 0);
	if (hhook == NULL)


}