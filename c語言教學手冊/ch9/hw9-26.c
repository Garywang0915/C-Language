#include <stdio.h>
#include <stdlib.h>

int length(char str[]);
int main(void)
{
	char str[] = "Hello, C Language";
	printf("字元陣列str占了%d個bytes\n", sizeof(str));
	printf("字元陣列str有%d個字元\n", length(str));

	system("pause");
	return 0;
}
int length(char str[])
{
	int i=0;
	
	while(str[i]!='\0')
	{
		i++;
	}
	return i;
}
