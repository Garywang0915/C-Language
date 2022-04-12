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
		printf("學生姓名: ");
		gets((ptr+i)->name);
		printf("數學成績: ");
		scanf("%d", &(ptr+i)->math);
		fflush(stdin);
	}
	for(i=0;i<MAX;i++)
		printf("%s的數學成績: %d\n", student[i].name, student[i].math);

	system("pause");
	return 0;
}

