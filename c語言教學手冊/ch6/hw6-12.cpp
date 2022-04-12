#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int score=0;
	
	printf("½Ð¿é¤J¦¨ÁZ ");
	scanf("%d", &score);
	
	if(score >= 80)
		printf("A¯Å!\n");
	else if((score >= 60) && score < 80)
		printf("B¯Å!\n");
	else
		printf("C¯Å!\n");
	
	system("pause");
	return 0;
}
