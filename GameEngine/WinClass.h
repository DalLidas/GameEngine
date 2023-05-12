#pragma once

#include <windows.h>

#ifdef _UNICODE
# define _T(str) L##str
#else
# define _T(str) str
#endif

class WinClass {
public:
	WinClass(int weight, int height);

	HWND GetHandle();

private:
	HWND wHandle;
};