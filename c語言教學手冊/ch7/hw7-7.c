#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	
	for(i=1;i<=100;i++)
	{
		if(i%6==0) //�i�H�Q6�㰣 
			printf("%d�i�H�Q6�㰣\n", i);
	}
	
	system("pause");
	return 0;
}
