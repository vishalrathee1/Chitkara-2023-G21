#include <stdio.h>

//self referential structures
// have pointer for themselves
typedef struct Node{
	int val;
	struct Node * next;
} Node;

int main()
{
	Node node1 = {10};
	Node node2 = {20};
	node1.next = &node2;
	node2.next = NULL;

	printf("%d\n", (*(node1.next)).val);

	return 0;
}