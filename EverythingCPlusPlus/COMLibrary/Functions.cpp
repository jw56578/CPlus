#include "Functions.h"
#include <stdio.h>

/*
if you look at COMExample for the same thing FunctionsExample.h
you will see that there is a different calling convention, this is what i got from the pluralsight video
but this does not work to export dlls to be consumed by C# managed code
It was not able to find entry point DoSomething
I had to add the extern "C"
and i had to add the __declspec(dllexpoert) 
and not use the __stdcall
this code can now be called from C#
*/
extern "C" __declspec(dllexport) void  DoSomething()
{
	printf("I'm doing something");
}