#include <stdio.h>
#include <stdlib.h>
#define SIZE (100)

int main(void)
{
	char str[SIZE];
	int i=0;
	int count[5]={0}; //���O�O��a,e,i,o,u�X�{������ 
	
	printf("�п�J�r��:");
	gets(str);
	
	while(str[i] != '\0')
	{
		if(str[i] == 'a')
			count[0]++;
		if(str[i] == 'e')
			count[1]++;
		if(str[i] == 'i')
			count[2]++;
		if(str[i] == 'o')
			count[3]++;
		if(str[i] == 'u')
			count[4]++;
		i++;
	}
	printf("�z��J���r�� %s��\n", str);
	printf("a�X�{�F%d��, e�X�{�F%d��,i�X�{�F%d��, o�X�{�F%d��, i�X�{�F%d��\n",\
	count[0], count[1], count[2], count[3], count[4]);

	system("pause");
	return 0;
}

