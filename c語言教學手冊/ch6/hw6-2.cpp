#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;
	printf("�п�J�@�Ӿ��: ");
	scanf("%d", &num);
	
	if(num>0)
		printf("�z��J����Ƥj��0\n");
	if(num<0)
		printf("�z��J����Ƥp��0\n");
	if(num==0)
		printf("�z��J����Ƶ���0\n");
			
	printf("�{������\n");
	
	system("pause");
	return 0;
}
