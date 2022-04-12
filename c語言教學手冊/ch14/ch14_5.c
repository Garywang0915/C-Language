#include <stdio.h>
#include <stdlib.h>
#include "linklist.h"

int main(void)
{
	NODE *first;
	int arr[] = {14,27,32,46};
	first = createList(arr, 4);
	printfList(first);
	freeList(first);

	system("pause");
	return 0;
}

