#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int year=0;
	
	do
	{
		printf("�п�J��v�~��: ");
		scanf("%d", &year);
	}
	while(year < 1000); //�|��� 

	if(year % 4000 == 0) //�C4000�~
		printf("�D�|�~\n");
	else if(year % 400 == 0)
		printf("�|�~\n");
	else if(year % 100 == 0)
		printf("�D�|�~\n");
	else if(year % 4 == 0)
		printf("�|�~\n");
	else
		printf("�D�|�~\n");
	

	system("pause");
	return 0;
}
