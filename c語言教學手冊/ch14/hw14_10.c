#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;

int main(void)
{
	int arr[] = {12,38,64,37};
	NODE a, b, c, d, insert_node;
	NODE *ptr = &a;
	
	a.data = arr[0];
	a.next = &b;	
	b.data = arr[1];
	b.next = &c;
	c.data = arr[2];
	c.next = &d;
	d.data = arr[3];
	d.next = NULL;

	printf("插入前\n");
	while(ptr!=NULL)
	{
		printf("data=%d ", ptr->data);
		ptr = ptr->next;
	}
	
	b.next = &insert_node;
	insert_node.data = 92;
	insert_node.next = &c;
	ptr = &a;
	
	printf("\n插入後\n");
	while(ptr!=NULL)
	{
		printf("data=%d ", ptr->data);
		ptr = ptr->next;
	}
	
	system("pause");
	return 0;
}

