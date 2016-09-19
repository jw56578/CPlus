void pointers()
{
	//normal integer variable
	int i = 1234;

	//* means pointer variable
	//0 is a special memory address that is always invalid, alwasy initialize this
	int * p = 0;

	//get the pointer of something & address of indicator
	p = &i;


	//get the value back out of the pointer, the value that is in the memory space the pointer is pointing to
	int j = *p;

	//this does not change p, it puts the value into the memory that p is pointing to
	*p = 23434;

	
}

void array() {
	//unitialized
	int numbers[4];

	//initialized
	int numbers2[3] = {1,3,4};

	//anthing not specified will be zerro
	int numbers3[3] = { 1,3 };

	//there is no length property in arrays
	//find the number of bytes of the array
	int sizeOfarrayinbytes = sizeof(numbers);

	//get the actual length
	//divide total number of bytes by the size of the byte of one thing int the arrray
	int lengthofarray = sizeOfarrayinbytes / sizeof(numbers[0]);

	//get pointer to first memory location of array
	int * p = numbers;
	//get pointer to the end of the array, the point after the last element, so the next location where another array could start
	int * end = p + lengthofarray;

	//another way to loop
	for (;p != end; ++p) {
		//this will be the value that is in each element of the array
		//the pointer starts at the beginning and because it know that its an int it knows to print out 32 bits from the pointer address
		//then add 1 which really means asdd 32 bits to get to the next address
		//print *p
	}
}
//we are passing in a pointer to an array of integers
//but this function does not know how many elements are in the array
//all the information that it has is the address of the beginnings and the type of the things in the array (int)
//you have to pass arrays to functions as pointers, not the actual array
//you cannot do sizeof on the pointer because it will just tell you the size of the pointer (int) 4 bytes
//you actually have to require the size as a paramter
void print(int * numbers, int size) 
{
}
//or you can just send in the the address of the begin and the end and do the loop that way
void printanotherway(int * begin, int * end) {}