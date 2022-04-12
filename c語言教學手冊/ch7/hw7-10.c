#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n,i;
	double sum=0;
	
	printf("請輸入正整數: ");
	scanf("%d", &n);
	
	
	for(i=1;i<=n;i++)
	{
		printf("%d\n", i);
		sum+=(1/(float)i);
	}
	
	printf("總和為 %lf\n", sum);
	
	system("pause");
	return 0;
}
