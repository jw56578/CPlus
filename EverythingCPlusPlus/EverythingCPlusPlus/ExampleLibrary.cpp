//i have no idea how this is tied together
//you are including the interface definition
//put then you are just creating the actual implemenation
//maybe its a one to one relationship from cpp to header
//quotes means that the compiler looks for file in same directory
#include "ExampleLibrary.h"

//brackets means that the compiler needs to know where to find this thing

#include "stdafx.h"
//so you just create the actual code for the interface method, but how do they have any idea
//that they are related
void Cluck()
{
	printf("c-style cluck");
}