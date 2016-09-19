int i = 12;
float f = 3.22f;
double d = 3.22;
char c = 'c';

unsigned int ui = 1111u;
short int si = 123;
long int li = 123;

//int is the word size of the system 32 bit or 64 bit, short is half that, long is twice that

short s = 123;
long l = 23;


//make your own type
typedef unsigned char byte;

byte b = 0x12;

//size of the variables types

int size = (int)sizeof(int); //how many bytes does this type take up