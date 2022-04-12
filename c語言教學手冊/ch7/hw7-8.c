#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	
	for(i=1;i<=100;i++)
	{
		if((i%7 == 0) &&(i%3 ==0)) //可以被3, 7整除 
			printf("%d可以被3和7整除\n", i);
	}
	
	system("pause");
	return 0;
}
