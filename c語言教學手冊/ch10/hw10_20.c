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
		count++;	//�r�굲���r�� 
		j=0;
	}
	printf("�r��*ptr�`�@���F: %dByte\n",count);
	
	system("pause");
	return 0;
}

