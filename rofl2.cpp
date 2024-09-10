#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <urlmon.h>
#include <iostream>
#include <fstream>
#include <WinInet.h>
#include <ShlObj.h>

#pragma comment(lib, "WinInet.lib")
#pragma comment(lib, "urlmon.lib")
#pragma comment(lib, "Winmm.lib")
int main()
{
	SwapMouseButton(true);
    return 0;
}
