#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int score=0;
	
	printf("�п�J���Z ");
	scanf("%d", &score);
	
	if(score >= 80)
		printf("A��!\n");
	else if((score >= 60) && score < 80)
		printf("B��!\n");
	else
		printf("C��!\n");
	
	system("pause");
	return 0;
}
