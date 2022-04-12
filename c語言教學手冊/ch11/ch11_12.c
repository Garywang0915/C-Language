#include <stdio.h>
#include <stdlib.h>
#define MAX (3)

struct data
{
	char name[10];
	int math;
};

int maximun(struct data arr[]);
int main(void)
{
	int index;
	struct data student[MAX] = {{"Mary", 87}, {"Flora", 93}, {"Jenny", 74}};
	
	index = maximun(student);
	
	printf("%s的成績最高:, 他數學考了 %d\n", (student + index)->name, (student + index)->math);


	system("pause");
	return 0;
}
int maximun(struct data arr[])
{
	int i,m, index;
	m = arr->math; //arr[0].math 
	
	for(i=0;i<MAX;i++)
	{
		if(arr[i].math > m)
		{
			m = (arr+i)->math;
			index = i;
		}
	}
	return index;
}
