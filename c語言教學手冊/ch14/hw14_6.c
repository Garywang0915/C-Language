#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, num, sum;
	struct student
	{
		char name[10];
		int score;
	} *ptr;
	
	printf("Number of student: ");
	scanf("%d", &num);
	
	ptr = (struct student*)malloc(num*sizeof(struct student));
	
	for(i=0;i<num;i++)
	{
		fflush(stdin);
		printf("name of student %d: ", i+1);
		gets((ptr+i)->name);
		printf("score of student %d: ", i+1);
		scanf("%d", &(ptr+i)->score);
		sum+= (ptr+i)->score; 
	}
	for(i=0;i<num;i++)
		printf("%s: score=%d\n", (ptr+i)->name, (ptr+i)->score);
	
	printf("Average of score %2.2f\n", (double)sum/num);
	free(ptr);

	system("pause");
	return 0;
}

