#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int a=4,b=6, larger;
	
	a>b ? (larger=a) : (larger=b);	//條件運算子的優先級別比賦值高 
	printf("%d數值較大\n", larger);
	
	system("pause");
	return 0;
}
