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
	NODE *node, *node2;
	
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
	
	printf("刪除前\n");
	ptr = first;
	while(ptr!= NULL)
	{
		printf("data = %d\n", ptr->data);
		ptr = ptr->next;
	}
	
	/* Delete the elements in arr*/
	//先找出要刪除的點
	ptr = first;
	while(ptr!=NULL)
	{
		if(ptr->data == 38)
		{
			node = ptr;
		}
		if(ptr->data == 64)
		{
			node2 = ptr;
		}
		ptr=ptr->next; 
	}
	
	ptr = first;
	if(node==first)	//刪除第一個 
		first=first->next;
	else
	{
		while(ptr->next!=node) //找出前一個位置 
			ptr = ptr->next;
		ptr->next = node->next;
	}
	free(node);
	ptr = first;
	if(node2==first)	//刪除第二個 
		first=first->next;
	else
	{
		while(ptr->next!=node2) //找出前一個位置 
			ptr = ptr->next;
		ptr->next = node2->next;
	}
	free(node2);
	printf("刪除後\n");
	ptr = first;
	
	while(ptr!= NULL)
	{
		printf("data = %d\n", ptr->data);
		ptr = ptr->next;
	}
	
	system("pause");
	return 0;
}

