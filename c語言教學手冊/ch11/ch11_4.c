#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct data
	{
		char name[10];
		int math;
	}; 
	struct data student1={"Gary Wang", 100};
	
	struct data student2 = student1;
	
	printf("學生名: %s\n",student2.name);
	printf("學生成績: %d\n",student2.math);


	system("pause");
	return 0;
}

