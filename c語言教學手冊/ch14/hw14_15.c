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
	int i, val, num;
	NODE *previous, *current, *first;
	
	printf("��J�`�I���Ӽ�: ");
	scanf("%d", &num);
	
	for(i=0;i<num;i++)
	{
		current = (NODE *) malloc(sizeof(NODE));
		printf("Data for node %d: ", i+1);
		scanf("%d", &(current->data));
		if(i==0)
			first==current;
		else
			previous->next=current;
		current->next=NULL;
		previous=current;
	}
	current=first;
	while(current!=NULL)
	{
		printf("Address=%p, ", current);
		printf("data=%d, ", current->data);
		printf("Next Address=%p\n", current->next);
		current = current->next;
	}
	/*����O����Ŷ�*/
	current = first;
	while(first!=NULL)
	{
		first = first->next;
		free(current);
		current = first;
	}

	system("pause");
	return 0;
}

