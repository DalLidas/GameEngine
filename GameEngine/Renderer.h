#pragma once

#include <Windows.h>

#include "WinClass.h"
#include "d3d11.h"

class Renderer {

public:
	Renderer(WinClass& window);

private:
	IDXGISwapChain* r_pSwapChain = nullptr;
	ID3D11Device* r_pDevice = nullptr;
	ID3D11DeviceContext* r_pDeviceContext = nullptr;
};