#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n=1;
	int sum=0;
	
	while(n<11)
	{
		printf("%d的平方為%d\n", n, n*n);
		sum = sum + n*n;
		n+=1;
	}
	printf("1~10的平方和 = %d\n", sum);
	
	
	system("pause");
	return 0;
}

