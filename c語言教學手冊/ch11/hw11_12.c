#include <stdio.h>
#include <stdlib.h>
#define MAX (2)
int main(void)
{
	int i;
	struct data
	{
		char name[10];
		int math;
	} student[MAX], *ptr;
	
	ptr = student;
	
	for(i=0;i<MAX;i++)
	{
		printf("�ǥͩm�W: ");
		gets((ptr+i)->name);
		printf("�ƾǦ��Z: ");
		scanf("%d", &(ptr+i)->math);
		fflush(stdin);
	}
	for(i=0;i<MAX;i++)
		printf("%s���ƾǦ��Z: %d\n", student[i].name, student[i].math);

	system("pause");
	return 0;
}

