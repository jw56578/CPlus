#pragma once
void doSomething(int a, int b);


//this is what is called a macro
//anywhere that the preprocessor sees DOSOMETHINGELSE, it will replace it will doSomething(a,a)
//the only way you know its a macro is because it is all upper case
//i guess macros are not good
#define DOSOMETHINGELSE(a) doSomething(a,a)