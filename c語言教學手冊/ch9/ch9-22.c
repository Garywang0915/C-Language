#include <stdio.h> 
#include <stdlib.h>

void toUpper(char s[]);
int main(void)
{
	int str[15];
	
	printf("�п�J�r��: ");
	gets(str);
	toUpper(str);
	printf("�ഫ���j�g��: %s\n", str);
	
	system("pause");
	return 0;
}

void toUpper(char s[])
{
	int i=0;
	while(s[i]!='\0')
	{
		if(s[i]>=97 && s[i] <= 122) //�p�g 
			s[i] = s[i] - 32; //ASCII ���32�ܤj�g 
		i++;
	}
}
