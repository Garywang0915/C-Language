#include <stdio.h>
#include <stdlib.h>
#define SIZE (100)
void reverse(char str[]);
int main(void)
{
	char s[SIZE];

	printf("�п�J�r��:");
	gets(s);
	
	reverse(s);
	
	printf("�ϹL�ӿ�X: \n");
	puts(s);

	system("pause");
	return 0;
}
void reverse(char str[])
{
	int i,length=0;
	char temp;
	
	while(str[length]!='\0')
	{
		length++;
	}
	for(i=0;i<(length/2);i++)
	{
		temp = str[i];
		str[i] = str[length-i-1];
		str[length-i-1] = temp;
	}
}
