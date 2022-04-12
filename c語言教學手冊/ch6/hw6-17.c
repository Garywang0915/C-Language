#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int score;
	printf("請輸入成績: ");
	scanf("%d", &score);
	
	score < 60 ? score>=50 ? printf("請參加補考\n") : printf("必須重修\n") : printf("本科及格\n");	

	system("pause");
	return 0;
}
