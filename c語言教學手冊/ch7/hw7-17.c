#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n=1;
	int sum=0;
	
	while(n<11)
	{
		printf("%d�����謰%d\n", n, n*n);
		sum = sum + n*n;
		n+=1;
	}
	printf("1~10������M = %d\n", sum);
	
	
	system("pause");
	return 0;
}

