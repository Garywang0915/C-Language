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
		printf("請輸入性別 1:男, 0:女 ");
		scanf("%d", &num);
	}while(num!=1 && num!=0);
	tom.sex = num;
	
	do
	{
		printf("是否已婚? 1:已婚, 0:未婚 ");
		scanf("%d", &num);
	}while(num!=1 && num!=0);
	tom.marriage = num;
	
	do
	{
		printf("請輸入年紀(0~127歲): ");
		scanf("%d", &num);
	}while(num<0 || num>127);
	tom.age = num;
	
	
	if(tom.sex==0)
		printf("性別:女,");
	else
		printf("性別:男,");
	
	if(tom.marriage==0)
		printf("未婚,");
	else
		printf("已婚,");
	printf("%d歲\n", tom.age);
	
	printf("sizeof(tom)=%d\n",sizeof(tom));

	system("pause");
	return 0;
}

