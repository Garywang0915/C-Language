#include <stdio.h>
#include <stdlib.h>

void display(char *ptr, int n); //接受一個字串的指標變數, 並且從第n個字元開始顯示到字串結束 
int main(void)
{
	char *str = "We are best friends";
	int n;
	
	do
	{
		printf("Plese input a num(>0): ");
		scanf("%d", &n);
	}while(n<=0);
	
	display(str, n);

	system("pause");
	return 0;
}
void display(char *ptr, int n)
{
	printf("%s\n", ptr+n-1);	//讓ptr從指向第1個改指向第n個 
}
