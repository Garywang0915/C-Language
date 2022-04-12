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
	NODE a, b, c, d;
	NODE *ptr = &a;
	
	a.data = arr[0];
	a.next = &b;	
	b.data = arr[1];
	b.next = &c;
	c.data = arr[2];
	c.next = &d;
	d.data = arr[3];
	d.next = NULL;

	printf("刪除前\n");
	while(ptr!=NULL)
	{
		printf("data=%d, ", ptr->data);
		ptr = ptr->next;
	}
	
	ptr=&a;
	b.data = arr[2];
	b.next = &c;
	c.data = arr[3];
	c.next = NULL;
	
	printf("刪除後\n");
	while(ptr!=NULL)
	{
		printf("data=%d, ", ptr->data);
		ptr = ptr->next;
	}
	
	system("pause");
	return 0;
}

