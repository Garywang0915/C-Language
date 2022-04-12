#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;

NODE *createNode(int *arr, int len);
void combineList(NODE *first1, NODE *first2);
int main(void)
{
	NODE *first1, *first2, *ptr;
	int arr1[]={12,43,56,34,98};
	int arr2[]={36,77,99};
	
	first1 = createNode(arr1, 5);
	first2 = createNode(arr2, 3);

	printf("連接前\n");
	for(ptr=first1;ptr!=NULL;ptr=ptr->next)
		printf("Data: %d\n", ptr->data);
		
	combineList(first1,first2);
	
	printf("連接後\n");
	for(ptr=first1;ptr!=NULL;ptr=ptr->next)
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
void combineList(NODE *first1, NODE *first2)
{
	NODE *ptr=first1;
	while(1)
	{
		if(ptr->next==NULL)
		{
			ptr->next = first2;
			break;
		}
		else
		{
			ptr=ptr->next;
		}
	}
}
