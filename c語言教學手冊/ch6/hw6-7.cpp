#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c;
	printf("�п�J�T���Ϊ��T���: ");
	scanf("%d %d %d", &a, &b, &c);
	
	if ((a+b)<=c)
	{
		printf("�L�k�զ��T����\n");
	}
	else if(a+c<=b)
	{
		printf("�L�k�զ��T����\n");
	}
	else if(b+c<=a)
	{
		printf("�L�k�զ��T����\n");
	}
	else
	{
		printf("�i�H�զ��T����\n");
	}
	
	system("pause");
	return 0;
	
}
