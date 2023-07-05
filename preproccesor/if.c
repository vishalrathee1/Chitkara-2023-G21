#include <stdio.h>
// #define PI 0.14159
// #if defined(PI) // we can use defined key word with if
// 	#define print(x) printf("%f/n", x+3)
// #endif

// #ifdef PI
// 	#define print(x) printf("%f\n", x+3)
// #endif

#ifndef PI //false //true
	#define PI 3.14159
	#define print(x) printf("%f\n", x)
#else 
	#define print(x) printf("%f\n", x+3)
#endif

int main()
{
	print(PI);
	return 0;
}