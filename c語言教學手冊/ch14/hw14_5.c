#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *num = (int *)malloc(sizeof(int));
	int *i = (int *)malloc(sizeof(int));
	struct student
	{
		char name[10];
		int score;
	} *ptr;
	
	printf("Number of student: ");
	scanf("%d", num);	
	
	ptr =(struct student *)malloc((*num)*sizeof(struct student));
	
	for(*i=0;*i<*num;(*i)++)
	{
		fflush(stdin);
		printf("name for student: ");
		gets((ptr+*i)->name);
		printf("score for student: ");
		scanf("%d", &(ptr+*i)->score);
	}

	for(*i=0;*i<*num;(*i)++)
		printf("%s: score = %d\n", (ptr+*i)->name, (ptr+*i)->score);

	system("pause");
	return 0;
}

