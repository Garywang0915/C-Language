#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char name[20];
	char *ptr = "How are you?";
	printf("What's your name? ");
	gets(name);	//輸入你的名字 
	printf("Hi, %s, ",name); //把你剛才輸入的名字放回去
	puts(ptr); 
	puts(++ptr);

	system("pause");
	return 0;
}

