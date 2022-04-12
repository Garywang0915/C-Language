#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char grade;
	printf("Input grade:");
	scanf("%c", &grade);
	
	switch(grade)
	{
		case 'a':
		case 'A':
			printf("Excellent!!\n");
			break;	
		case 'b':
		case 'B':
			printf("Good!!\n");
			break;
		case 'c':
		case 'C':
			printf("Be study Hard!!\n");
			break;
		case 'd':
		case 'D':
			printf("Fail!!\n");
			break;
		default:
			printf("Please input again!\n");
	}
	
	system("pause");
	return 0;
}
