#include <stdio.h>
#include <stdlib.h>

int length(char str[]);
int main(void)
{
	char str[] = "Hello, C Language";
	printf("�r���}�Cstr�e�F%d��bytes\n", sizeof(str));
	printf("�r���}�Cstr��%d�Ӧr��\n", length(str));

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
