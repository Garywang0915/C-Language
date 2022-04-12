#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i;
	
	printf("argc的值為%d\n", argc);
	for(i=0;i<argc;i++)
		printf("argv[%d] = %s", i, argv[i]);

	system("pause");
	return 0;
}

/* 命令提示字元下輸入 
C:\Users\GaryWang>cd C:\Users\GaryWang\Documents\C語言練習\c語言教學手冊\ch13\

C:\Users\GaryWang\Documents\C語言練習\c語言教學手冊\ch13>ch13_8 Time is money!
*/
