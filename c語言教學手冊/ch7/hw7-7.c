#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	
	for(i=1;i<=100;i++)
	{
		if(i%6==0) //可以被6整除 
			printf("%d可以被6整除\n", i);
	}
	
	system("pause");
	return 0;
}
