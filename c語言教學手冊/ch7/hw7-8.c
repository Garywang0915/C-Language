#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	
	for(i=1;i<=100;i++)
	{
		if((i%7 == 0) &&(i%3 ==0)) //�i�H�Q3, 7�㰣 
			printf("%d�i�H�Q3�M7�㰣\n", i);
	}
	
	system("pause");
	return 0;
}
