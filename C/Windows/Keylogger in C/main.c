#include <windows.h>
#include <stdio.h>

something hook_Proc(.....)


int main()
{

	SetWindwHookExA(WH_KEYBOARD_LL, hook_Proc, NULL, 0);


}