#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *ptr = "We are best friends";
	int count_total=0;
	int count_lower=0;
	
	while(*(ptr+count_total) != '\0')
	{
		if(*(ptr + count_total) > 'a' && *(ptr + count_total) < 'z')	//小寫 
			count_lower++;
		count_total++;	//總字元數 
	}
	printf("總字元數(不包含結束字元): %d\n", count_total);
	printf("小寫字元數: %d\n", count_lower);

	system("pause");
	return 0;
}

