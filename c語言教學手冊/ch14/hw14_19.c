#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;

NODE *createNode(int *arr, int len);
NODE *searchNode(NODE *first, int num);
NODE *deleteNode(NODE *first, NODE *node); 
int main(void)
{
	NODE *first, *ptr, *node;
	int arr[]={12,43,56,34,98,76,43,24};
	
	first = createNode(arr, 8);

	//刪除前
	printf("刪除前\n");
	for(ptr=first;ptr!=NULL;ptr=ptr->next)
		printf("Data: %d\n", ptr->data);
	
	node = searchNode(first, 12);
	first = deleteNode(first, node);
	node = searchNode(first, 34);
	first = deleteNode(first, node);
	node = searchNode(first, 24);
	first = deleteNode(first, node);
	
	printf("刪除後\n");
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
NODE *searchNode(NODE *first, int num)
{
	NODE *node = first;
	while(node!=NULL)
	{
		if(node->data == num)
			return node;
		else
			node= node->next;
	}
	return NULL;
}
NODE *deleteNode(NODE *first, NODE *node)
{
	NODE *ptr=first;
	
	if(first==NULL)
	{
		printf("Nothing to delete.\n");
		return NULL;
	}
	if(node == first)
		first = first->next;
	else
	{
		while(ptr->next!=node) //找出要刪除的前一個點 
			ptr=ptr->next;
		ptr->next = node->next;
	}
	free(node);
	return first;
}
