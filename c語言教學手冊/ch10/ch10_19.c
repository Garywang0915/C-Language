#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char name[20];
	char *ptr = "How are you?";
	printf("What's your name? ");
	gets(name);	//��J�A���W�r 
	printf("Hi, %s, ",name); //��A��~��J���W�r��^�h
	puts(ptr); 
	puts(++ptr);

	system("pause");
	return 0;
}

