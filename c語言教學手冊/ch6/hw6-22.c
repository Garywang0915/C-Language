#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char i;
	
	printf("�п�J�r�� ");
	scanf(" %c", &i);	

	switch(i)
	{
		case 'a':
		case 'A':
			printf("�z��J���OA\n");
			break;
		case 'b':
		case 'B':
			printf("�z��J���OB\n");
			break;
		default:
			printf("�z��J�����OA��B\n");
			break;
	}
	
	system("pause");
	return 0;
}
