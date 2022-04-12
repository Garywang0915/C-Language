#include <stdio.h>
#include <stdlib.h>
#define SIZE (100)

int main(void)
{
	char str[SIZE];
	int i=0;
	int count[5]={0}; //分別記錄a,e,i,o,u出現的次數 
	
	printf("請輸入字串:");
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
	printf("您輸入的字串 %s中\n", str);
	printf("a出現了%d次, e出現了%d次,i出現了%d次, o出現了%d次, i出現了%d次\n",\
	count[0], count[1], count[2], count[3], count[4]);

	system("pause");
	return 0;
}

