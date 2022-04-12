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
	first = deleteNode(first, node);	//刪除存放38的node 
	printfList(first);
	
	first = deleteNode(first, first);	//刪除第一個node 
	printfList(first);

	first = deleteNode(first, first);	//刪除第一個node 
	printfList(first);
	
	freeList(first);

	system("pause");
	return 0;
}

