#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	
	printf("請輸入一個8進位的整數: ");
	scanf("%o", &num);
	printf("您輸入的8進位為: %o, 10進位: %d, 16進位: %p\n", num,num,num);

	system("pause");
	return 0;
}

