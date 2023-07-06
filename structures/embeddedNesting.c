#include <stdio.h>
#include <string.h>

struct Aeroplane{
	char builtBy[100];
	int seats;
	int capacity;
	//while defining structure inside structure we must declare some variables for it otherwise 
	// we won't be able to create some variables after that because of local scope of
	// nested structure
	struct Engine{
		int power;
		char type[50];
	}engine1, engine2;
};

int main(){
	struct Aeroplane boeing747;
	strcpy(boeing747.builtBy, "Boeing");
	boeing747.seats = 500;
	boeing747.capacity = 1000;
	boeing747.engine1.power = 750;
	strcpy(boeing747.engine1.type, "Main-Engine");
	boeing747.engine2.power = 450;
	strcpy(boeing747.engine2.type, "Side-Engine");
	printf("%s\n",boeing747.engine1.type );
	printf("%s\n",boeing747.engine2.type );
	return 0;
}