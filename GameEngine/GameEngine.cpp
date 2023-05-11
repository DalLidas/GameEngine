// GameEngine.cpp : Определяет точку входа для приложения.
//
//#include "GameEngine.h"

#include <windows.h>

#include "WinClass.h"

int CALLBACK wWinMain(
	_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPWSTR lpCmdLine,
	_In_ int nShowCmd){

	WinClass windows(400, 400);

	MSG msg = { 0 };
	while (true) {
		if (PeekMessage(&msg, 0, 0, 0, PM_REMOVE)) {
			TranslateMessage(&msg);
			DispatchMessage(&msg);

			if (msg.message == WM_QUIT) {
				break;
			}
		}
	}

	return 0;
}