/*
c variables are not initialized to anything like in C#, int will not be 0
so its best practice to declare them right where you use them so they can have a value put into them



*/
//static variable in a file will be initialized to 0 and can only be used within this file
static int iminthisfile;
//don't create file level variables because they can be used through the code, like javascript global!
//int dontdothis;
void testVariables() 
{
	//this thing is now going to have some random value of whateve was in memory at the point in the stack
	//most likely it would be zero, but thats not for sure
	int somethingweird;

	//always initialize to a value
	int iknowwhatiam = 0;


	//you can randomly declare static variables anywhere in any function
	static int imalwayshere;



}