// DllTest.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"

extern "C" __declspec(dllexport) int PlusInt(int x, int y)
{
	return (x + y);
}
