#include <stdio.h>
#include <stdlib.h>
#include <assert.h> 
struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;

int main(void)
{
	int i;
	int arr[] = {12,38,64,37};
	NODE *first, *current, *previous, *ptr;
	
	for(i=0;i<4;i++)
	{
		current = (NODE *)malloc(sizeof(NODE));
		current->data = arr[i];
		if(i==0)
			first = current;
		else
			previous->next = current;
		current->next = NULL;
		previous = current;	
	}
	
	ptr = first;
	while(ptr!= NULL)
	{
		printf("data = %d\n", ptr->data);
		ptr = ptr->next;
	} 

	system("pause");
	return 0;
}

