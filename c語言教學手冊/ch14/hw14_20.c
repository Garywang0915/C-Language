#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;

NODE *createNode(int *arr, int len);
NODE *insertFirstNode(NODE *first, int item); //在第一個位置插入資料為item的節點, 並傳回first的指標 
int main(void)
{
	NODE *first, *ptr, *node;
	int arr[]={12,43,56,34,98,76,43,24};
	
	first = createNode(arr, 8);

	printf("插入前\n");
	for(ptr=first;ptr!=NULL;ptr=ptr->next)
		printf("Data: %d\n", ptr->data);

	first = insertFirstNode(first, 53);
	
	printf("插入後\n");
	for(ptr=first;ptr!=NULL;ptr=ptr->next)
		printf("Data: %d\n", ptr->data);
		
	system("pause");
	return 0;
}

NODE *createNode(int *arr, int len)
{
	NODE *first, *previous, *current;
	int i;
	for(i=0;i<len;i++)
	{
		current = (NODE *)malloc(sizeof(NODE));
		current->data = *(arr+i);
		if(i==0)
			first = current;
		else
			previous->next = current;
		current->next = NULL;
		previous = current;
	}
	return first;
}

NODE *insertFirstNode(NODE *first, int item)
{
	NODE *node = (NODE *)malloc(sizeof(NODE));
	node->data = item;
	node->next = first->next;
	first->next = node;
	return first;
}
