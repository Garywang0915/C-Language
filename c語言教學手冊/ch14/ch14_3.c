#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next; //指向下個節點的座標 
};
typedef struct node NODE;

int main(void)
{
	NODE a,b,c;
	NODE *ptr = &a;
	
	a.data=12;
	a.next=&b;
	b.data=30;
	b.next=&c;
	c.data=64;
	c.next=NULL;	//終端節點 

	while(ptr!=NULL)
	{
		printf("Address=%p, ", ptr);
		printf("data=%d, ", ptr->data);
		printf("Next Address=%p", ptr->next);
		ptr = ptr->next;
	}
 
	system("pause");
	return 0;
}

