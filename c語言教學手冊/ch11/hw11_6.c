#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct date
	{
		int month;
		int day;
	};
	struct data
	{
		char name[10];
		int math;
		struct date birthday;
	};
	struct data s1;
	
	printf("�п�J�ǥͩm�W:");
	gets(s1.name);
	do
	{
		printf("�п�J�ǥͦ��Z:");
		scanf("%d", &s1.math);
	}while(s1.math<0 || s1.math >100);
	do
	{
		printf("�п�J�ǥͥͤ�(���n�γr���j�}ex 9,15):");
		scanf("%d, %d", &s1.birthday.month, &s1.birthday.day);
	}while(s1.birthday.month<0 || s1.birthday.month>12 || s1.birthday.day<0 || s1.birthday.day>31);
	//�̫�@�ӱ������ӭn�d�Ӥj�p��... 
	
	printf("�ǥͩm�W: %s\n", s1.name);
	printf("�ǥͦ��Z: %d\n", s1.math);
	printf("�ǥͥͤ�: %d��%d��\n", s1.birthday.month, s1.birthday.day);

	system("pause");
	return 0;
}

