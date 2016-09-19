
//i assume this is the same concept as in c#, a value type that is on the stack
struct Pixel
{
	float X;
	float Y;

};

//there is no built in byte type, we are using char which is 8 bits to make the byte
typedef unsigned char byte;

struct Color
{
	//an rgb value is only up to 255 which will fit in a byte, that is why we don't need to waste memory with a integer
	byte Red;
	byte Green;
	byte Blue;

};

//if you dont' want to use the struct key word over and over you can do this
typedef struct Pixel Pixel;
typedef struct Color Color;
//or do this inline
//typedef struct
//{
//	float X;
//	float Y;
//
//} Pixel;

void run()
{
	//in plain old c you cannot do this, you have to use the key word struct
	//Pixel p;
	//Color c;

	struct Pixel p;
	struct Color c;

	//jk, this will now work because of the typedef
	Pixel p2;
	Color c2;

	//initialize stuff
	Pixel p3 = { 10.0f,44.0f };
	//get things like alwasy
	p3.X;

	//assign as always
	p3.X = 244;

}