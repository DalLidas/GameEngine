#include "Renderer.h"

Renderer::Renderer(WinClass& window) {
	//Define the swap chain
	DXGI_SWAP_CHAIN_DESC SwapChainDesc = { 0 };
	SwapChainDesc.BufferCount = 1;
	SwapChainDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
	SwapChainDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
	SwapChainDesc.OutputWindow = window.GetHandle();
	SwapChainDesc.SampleDesc.Count = 1;
	SwapChainDesc.Windowed = true;

	//Create the swap chain device and device context
	auto result = D3D11CreateDeviceAndSwapChain(
		nullptr, D3D_DRIVER_TYPE_HARDWARE, nullptr, 0,
		nullptr, 0, D3D11_SDK_VERSION, &SwapChainDesc,
		&r_pSwapChain, &r_pDevice, nullptr, &r_pDeviceContext);

	//Check to errors
	if (result != S_OK) {
		MessageBox(window.GetHandle(), L"ErrorInitD3D11", L"Error", MB_OK);
		exit(EXIT_SUCCESS);
	}
}