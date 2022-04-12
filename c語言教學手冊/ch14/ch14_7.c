#include <stdio.h>
#include <stdlib.h>
#include "linklist.h"

int main(void)
{
	NODE *first, *node;
	int arr[]={12,38,57};
	
	first = createList(arr, 3);
	printfList(first);
	node = searchNode(first, 38);
	first = deleteNode(first, node);	//�R���s��38��node 
	printfList(first);
	
	first = deleteNode(first, first);	//�R���Ĥ@��node 
	printfList(first);

	first = deleteNode(first, first);	//�R���Ĥ@��node 
	printfList(first);
	
	freeList(first);

	system("pause");
	return 0;
}

