#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int length=300;
	int day=0;
	
	while(length > 5)
	{
		length = length/2;
		day = day+1;
	}
	
	printf("總共需要%d天, 繩子才會短於5公分\n", day);
	
	system("pause");
	return 0;
}

