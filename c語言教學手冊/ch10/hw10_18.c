#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *ptr = "We are best friends";
	int count_total=0;
	int count_lower=0;
	
	while(*(ptr+count_total) != '\0')
	{
		if(*(ptr + count_total) > 'a' && *(ptr + count_total) < 'z')	//�p�g 
			count_lower++;
		count_total++;	//�`�r���� 
	}
	printf("�`�r����(���]�t�����r��): %d\n", count_total);
	printf("�p�g�r����: %d\n", count_lower);

	system("pause");
	return 0;
}

