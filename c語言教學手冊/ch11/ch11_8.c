#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct data
	{
		char name[10];
		int math;
		int eng;
	}student, *ptr;
	
	ptr = &student;
	printf("�ǥͩm�W: ");
	gets(ptr->name);
	printf("�ƾǦ��Z: ");
	scanf("%d", &ptr->math);
	printf("�^�妨�Z: ");
	scanf("%d", &ptr->eng);
	
	printf("�ƾǦ��Z = %d\n", ptr->math);
	printf("�^�妨�Z = %d\n", ptr->eng);
	printf("�������Z = %.2f\n", (ptr->math + ptr->eng)/2.0);
	
	system("pause");
	return 0;
}

