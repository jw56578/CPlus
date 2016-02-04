#include "FunctionExample.h"
#include "stdafx.h"

//https://msdn.microsoft.com/en-us/library/984x0h58(VS.80).aspx
// __stdcall is a calling convention, there is no equal of this in C#
//it just tells the compiler to create diffferent instructions of how a function calls another function, view details in above link
void __stdcall DoSomething()
{
	printf("I'm doing something");
}
