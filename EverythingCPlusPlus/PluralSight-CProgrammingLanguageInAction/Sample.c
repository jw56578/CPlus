#include <stdio.h>
//we don't care about the code of the actual source file, only the method signature
//the issue is when there are  conflicts between functions with the same name
#include "CommonFunctionality.h"
/*
Visual studio is hiding the work of the preprocessor that is taking all these files and putting them together
everywhere that a #include is, the preprocessor just puts the actual code there
this is like js bundling i guess
you would have to do this through the command line if you wanted to see it in action
cl sample.c /P /C /EP
this would then create a file of the same name with a .i extension
*/

//you can do a bunch of weird stuff with macros and preprocessor, watch video again if you care

int main()
{
	//none of the damn syntax shown up to module 5 is any different than java, there is no point
	printf("");
}

//this can't be here because it exists already in RandomOtherSourceFile


//void doSomething(int a, int b)
//{
//
//}