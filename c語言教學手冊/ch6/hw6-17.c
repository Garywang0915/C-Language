#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int score;
	printf("�п�J���Z: ");
	scanf("%d", &score);
	
	score < 60 ? score>=50 ? printf("�аѥ[�ɦ�\n") : printf("��������\n") : printf("����ή�\n");	

	system("pause");
	return 0;
}
