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
	int i,index=0;
	int arr[] = {12,38,64,37};
	NODE *first, *current, *previous, *ptr;
	
	printf("插入前\n");
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
	
	/* insert new element after 3rd */
	ptr = first;
	while(ptr!=NULL)
	{
		if(index == 2)	//第2個元素 
		{
			NODE *insert_node = (NODE *)malloc(sizeof(NODE));
			insert_node->data = 47;
			insert_node->next = ptr->next;
			ptr->next = insert_node;
		}
		ptr = ptr->next;
		index++;
	}
	printf("插入後\n");
	ptr = first;
	while(ptr!= NULL)
	{
		printf("data = %d\n", ptr->data);
		ptr = ptr->next;
	}

	system("pause");
	return 0;
}

