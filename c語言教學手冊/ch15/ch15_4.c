#include <stdio.h>

int main(void)
{
	struct status
	{
		unsigned sex:1;
		unsigned marriage:1;
		unsigned age:7;
	};
	struct status tom={1,0,21};
	
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

