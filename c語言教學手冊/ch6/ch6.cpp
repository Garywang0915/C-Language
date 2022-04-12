#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2, larger;
	printf("please input two integer numbers: ");
	scanf("%d %d", &num1, &num2);
	
	num1>num2 ? (larger = num1) : (larger = num2); // 條件運算子
	printf("%d 數值較大\n", larger);
	
	system("pause");
	return 0;
}
