#include <stdio.h> 
#include <stdlib.h>

int main(void)
{
	char ch='a';
	char str1[] = "a";
	char str2[] = "Sweet home";
	
	printf("字元ch占了%d個位元組\n", sizeof(ch));
	printf("字元str1占了%d個位元組\n", sizeof(str1));
	printf("字元str2占了%d個位元組\n", sizeof(str2));
	
	system("pause");
	return 0;
}
