#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int score;
	printf("Your score: ");
	scanf("%d", &score);
	
	score >= 80 ? printf("%d is A\n", score): score>=70 ? printf("%d is B\n", score): score>=60 ? printf("%d is C\n", score) :printf("Failed!\n");
	

	system("pause");
	return 0;
}
