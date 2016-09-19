void string() {

	//strings are just arrays 
	//string literal
	//the compiler will just put the string in some random memory location
	//and the pointer variable will be what that location is 
	char * string = "hello world";

	char stringasarray[] = "you can do this also with strings";


	//the coppiler already knows the size of the string since its hard coded
	//this doesn't work to know the length of the string because it includes the null terminator 0 at the end
	sizeof(string);

	//the end of all string literals have a null terminator at the end to know where the end is
	//this is how you get length properrty
	int lengthofstring = 0;
	for (char * p = string;*p != 0;++p) {
		lengthofstring++;
	}

	//or do it this way
	lengthofstring = 0;
	//while the pointer to the string doesn't equal 0 keep going then inclurement the pointer address by 32 bits
	while (*string++) {
		lengthofstring++;
	}

}