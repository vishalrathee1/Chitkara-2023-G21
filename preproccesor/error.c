#include <stdio.h>
// #define PI 3.14159
#ifndef PI
	//will stop further compilation
	#error PI was not defined 
#endif
#define print(x) printf("%f\n", x)

int main()
{
	print(PI);
	return 0;
}