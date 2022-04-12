#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char key_color; //使用者輸入的顏色 
	enum color
	{
		red=114,
		RED=82,
		green=103,
		GREEN=71,
		blue=98,
		BLUE=66
	} shirt;
	
	do
	{
		printf("請輸入r, g或是b:");
		scanf("%c", &key_color);
		fflush(stdin);
	}while(key_color!= red && key_color!= green && key_color!= blue &&\
		   key_color!= RED && key_color!= GREEN && key_color!= BLUE);
	
	shirt = key_color;
	
	switch(shirt)
	{
		case RED:
		case red:
			printf("您選擇了紅色\n");
			break;
		case BLUE:
		case blue:
			printf("您選擇了藍色\n");
			break;
		case GREEN:
		case green:
			printf("您選擇了綠色\n");
			break;
	}

	system("pause");
	return 0;
}

