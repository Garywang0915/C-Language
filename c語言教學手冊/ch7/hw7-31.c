#include <stdio.h> 
#include <stdlib.h>

int main(void)
{
	int i;
	
	for(i=1;i<=100;i++)
	{
		if ((i%2==0) && (i%3==0))
		{
			if(i%12!=0)
				printf("%d�i�H�Q2, 3�㰣������Q12�㰣\n", i);
				continue;
		}
	}
	
	system("pause");
	return 0;
}
