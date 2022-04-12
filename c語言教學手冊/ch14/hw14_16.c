#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;
typedef NODE* NODEp;

int main(void)
{
	int i, val, num;
	NODEp previous, current, first;
	
	printf("輸入節點的個數: ");
	scanf("%d", &num);
	
	for(i=0;i<num;i++)
	{
		current = (NODEp) malloc(sizeof(NODE));
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

	system("pause");
	return 0;
}

