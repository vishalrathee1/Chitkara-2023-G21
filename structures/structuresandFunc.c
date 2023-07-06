#include <stdio.h>

void f(struct Student student){
	return;
}

int main()
{
	struct Student{
		char name[50];
		int rollNo;
	} stu1;
	f(stu1);
	return 0;
}