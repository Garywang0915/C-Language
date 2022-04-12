#include <stdio.h>
#include <stdlib.h>

int cnt;
void count(void);

int main(int argc, char *argv[]) 
{
	printf("請輸入cnt的初值: ");
	scanf("%d", &cnt);
	
	count(); //第一次執行 
	count(); //第二次執行 
	
	cnt++;
	printf("cnt=%d\n", cnt);
	
	system("pause");
	return 0;
}
