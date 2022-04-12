#include <stdio.h>
#include <stdlib.h>
#define MAX (3)

int main(void)
{
	struct data
	{
		char name[10];
		int math;
	} student[MAX] = {{"Mary", 87}, {"Flora", 93}, {"Jenny", 74}};
	
	int i, m, index;
	m = student->math; //m訂為student[0].math 
	
	for(i=0;i<MAX;i++)
	{
		if(student[i].math > m)
		{
			m = (student+i)->math;
			index = i;
		}
	}
	
	printf("%s的成績最高:, 他數學考了 %d\n", (student + index)->name, (student + index)->math);


	system("pause");
	return 0;
}

