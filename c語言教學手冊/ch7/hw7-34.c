#include <stdio.h> 
#include <stdlib.h>

int main(void)
{
	int n=1;
	
	while(n>0)
	{
		if((n%3==1)&& (n%5==3) && (n%7==2))
			break;
		n++;
	}
	printf("�̤֦�%d���ߤl\n", n);
	
	system("pause");
	return 0;
}
