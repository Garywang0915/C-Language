#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,j;
	char *ptr[3] = {"Tom", "Lily", "James Lee"};
	int count = 0;
	
	j=0;
	for(i=0;i<3;i++)
	{
		while(*(*(ptr+i)+j) != '\0')
		{
			count++;
			j++;		
		}
		count++;	//字串結束字元 
		j=0;
	}
	printf("字串*ptr總共佔了: %dByte\n",count);
	
	system("pause");
	return 0;
}

