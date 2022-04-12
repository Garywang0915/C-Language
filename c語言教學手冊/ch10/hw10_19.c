#include <stdio.h>
#include <stdlib.h>

int length(char *ptr);
int main(void)
{
	char *str = "We are best friends";
	int count_total;
	
	count_total = length(str);
	
	printf("總字元數(不包含結束字元): %d\n", count_total);

	system("pause");
	return 0;
}

int length(char *ptr)
{
	int i=0;
	while(*(ptr+i) != '\0')
	{
		i++;
	}
	return i;
}
