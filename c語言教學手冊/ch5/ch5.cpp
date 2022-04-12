#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = 5;
	int b = 3;
	int num = 0;
	
	a+=a+ (b++);	// ¹Bºâ¦¡ 
	printf("num = %d\n", num);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	
	system("pause");
	return 0;
}
