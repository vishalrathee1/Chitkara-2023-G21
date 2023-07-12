#include <stdio.h>

struct Array{
	int arr[5];
};

void increment(struct Array newArr){
	for(int i =0; i<5; i++){
		newArr.arr[i]++;
		printf("%d\t", newArr.arr[i] );
	}
}

int main(){
	struct Array newArr ;
	newArr.arr[0] = 10;
	newArr.arr[1] = 20;
	newArr.arr[2] = 30;
	newArr.arr[3] = 40;
	newArr.arr[4] = 50;

	increment(newArr);

	for(int i =0; i<5; i++){
		printf("\n%d\t", newArr.arr[i] );
	}

	return 0;
}