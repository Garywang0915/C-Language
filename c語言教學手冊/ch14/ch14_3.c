#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next; //���V�U�Ӹ`�I���y�� 
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
	c.next=NULL;	//�׺ݸ`�I 

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

