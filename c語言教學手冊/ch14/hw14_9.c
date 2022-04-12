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

	while(ptr!=NULL)
	{
		printf("Address=%p, ", ptr);
		printf("data=%d, ", ptr->data);
		printf("Next Address=%p\n", ptr->next);
		ptr = ptr->next;
	}
	
	system("pause");
	return 0;
}

