#include <stdio.h>
#include <stdlib.h>

void toLower(char str[]);
int main(void)
{
	char str[30];
	
	printf("Please input the str:\n");
	gets(str);
	toLower(str);
	printf("§ï¦¨¤p¼g\n");
	puts(str);


	system("pause");
	return 0;
}

void toLower(char str[])
{
	int i=0;
	
	while(str[i]!= '\0')
	{
		if(str[i] <= 'Z' && str[i] >= 'A')
			str[i]+=32;
		i++;
	}
}
