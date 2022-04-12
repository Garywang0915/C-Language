#include <stdio.h> 
#include <stdlib.h>

int main(void)
{
	int num=1;
	
	while(num>0)
	{
		if(num%3 ==2 && num%5==3 && num%7 ==2)
			break;
		num++;
	}
	printf("孫子問題最小為%d\n", num);
	
	system("pause");
	return 0;
}
