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
	
	enum color shirt;	//shirt為enum color的變數
	
	printf("sizeof(shirt) = %d\n", sizeof(shirt));		//	4
	printf("red = %d\n", red);
	printf("green = %d\n", green);
	printf("blue = %d\n", blue);
	
	shirt = green;
	if(shirt == green)
		printf("您選擇了綠色衣服\n");
	else
		printf("您選擇了非綠色衣服\n");

	system("pause");
	return 0;
}

