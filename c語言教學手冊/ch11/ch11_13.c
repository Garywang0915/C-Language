#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	enum color
	{
		red,
		green,
		blue
	};
	
	enum color shirt;	//shirt��enum color���ܼ�
	
	printf("sizeof(shirt) = %d\n", sizeof(shirt));		//	4
	printf("red = %d\n", red);
	printf("green = %d\n", green);
	printf("blue = %d\n", blue);
	
	shirt = green;
	if(shirt == green)
		printf("�z��ܤF����A\n");
	else
		printf("�z��ܤF�D����A\n");

	system("pause");
	return 0;
}

