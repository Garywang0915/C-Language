#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct data
	{
		char name[10];
		int math;
	}student;
	
	printf("�п�J�m�W: ");
	gets(student.name);
	printf("�п�J���Z: ");
	scanf("%d", &student.math);
	
	printf("�m�W:%s\n", student.name);
	printf("���Z:%d\n", student.math);
	 
	system("pause");
	return 0;
}

