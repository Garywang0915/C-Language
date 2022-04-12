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
void insertNode(NODE *node, int num);
int main(void)
{
	NODE *first, *ptr, *node;
	int arr[]={12,43,56,34,98,76,43,24};
	
	first = createNode(arr, 8);

	// 插入前
	printf("插入前\n");
	for(ptr=first;ptr!=NULL;ptr=ptr->next)
		printf("Data: %d\n", ptr->data);
	
	node = searchNode(first, 56);
	insertNode(node, 88); 
	
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
void insertNode(NODE *node, int num)
{
	NODE *newnode = (NODE *) malloc(sizeof(NODE));
	
	newnode->data = num;
	newnode->next = node->next;
	node->next = newnode;
}
