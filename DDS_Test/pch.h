// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#ifndef PCH_H
#define PCH_H

#pragma comment(lib, "version")
#pragma comment(lib, "mincore")

//#include <Windows.h>
#include "SDK.h"
//#include "ImGUI/imgui.h"

#define INVALID_POINTER_VALUE(x) ((x == (uintptr_t)-1) || x == NULL)
#endif //PCH_H
