typedef struct
{
	//it actually matters what order you define fiends
	short first; //xx__
	int second;  //xxxx
	short third; //xx__
	//paddin is added to make everything the same and also to ensure if it was in an array then each thing is the same


} Layout;

typedef struct
{
	//this no longer requires padding
	//im not quite sure as to why this order makes padding unecessarry
	//because the 2 shorts add up to an integer so its even?
	short first;  //xx
	short second; //xx
	int third;    //xxxx
			

} Layout2;