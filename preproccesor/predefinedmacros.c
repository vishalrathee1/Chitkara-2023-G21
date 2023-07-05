#include<stdio.h>

int main(){
	printf("%s\n", __DATE__);
	printf("%s\n", __TIME__);
	printf("%d\n", __STDC__);
	printf("%s\n", __FILE__); // tells us whether our program is compiled with ANSI C standard or not
	// printf("%s\n", __LINE__);
	return 0;
}