#include <stdio.h>

int main(void)
{
	struct status
	{
		unsigned sex:1;
		unsigned marriage:1;
		unsigned age:7;
	};
	struct status tom;
	int num;
	
	do
	{
		printf("�п�J�ʧO 1:�k, 0:�k ");
		scanf("%d", &num);
	}while(num!=1 && num!=0);
	tom.sex = num;
	
	do
	{
		printf("�O�_�w�B? 1:�w�B, 0:���B ");
		scanf("%d", &num);
	}while(num!=1 && num!=0);
	tom.marriage = num;
	
	do
	{
		printf("�п�J�~��(0~127��): ");
		scanf("%d", &num);
	}while(num<0 || num>127);
	tom.age = num;
	
	
	if(tom.sex==0)
		printf("�ʧO:�k,");
	else
		printf("�ʧO:�k,");
	
	if(tom.marriage==0)
		printf("���B,");
	else
		printf("�w�B,");
	printf("%d��\n", tom.age);
	
	printf("sizeof(tom)=%d\n",sizeof(tom));

	system("pause");
	return 0;
}

