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
	
	printf("�ǥͦW: %s\n",student.name);
	printf("�ǥͦ��Z: %d\n",student.math);


	system("pause");
	return 0;
}

