#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int mouth;
	
	printf("�п�J���: ");
	scanf("%d", &mouth);
	
	if ((mouth >= 3) && (mouth <= 5))
		printf("�K�u\n");
	else if((mouth >= 6) && (mouth <= 8))
		printf("�L�u\n");
	else if((mouth >= 9) && (mouth <= 11))
		printf("��u\n");
	else if((mouth == 12) || (mouth <= 2))
		printf("�V�u\n");
	else
		printf("�Э��s��J���\n");

	system("pause");
	return 0;
}
