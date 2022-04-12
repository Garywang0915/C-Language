#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct data
	{
		char name[10];
		int math;
	}; 
	struct data student={"Gary Wang", 100};
	
	printf("學生名: %s\n",student.name);
	printf("學生成績: %d\n",student.math);


	system("pause");
	return 0;
}

