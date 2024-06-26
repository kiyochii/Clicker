#pragma once
#include "Windows.h"

namespace click {
	void clicar() {
		if (GetAsyncKeyState(VK_LBUTTON)) {
			if (FindWindowA("LWJGL", nullptr) == GetForegroundWindow() || FindWindowA("GLFW30", nullptr) == GetForegroundWindow()) {
				SendMessageW(GetForegroundWindow(), WM_LBUTTONDOWN, MK_LBUTTON, MAKELPARAM(0, 0));
				SendMessageW(GetForegroundWindow(), WM_LBUTTONUP, MK_LBUTTON, MAKELPARAM(0, 0));
				
			}
		}
	}
}