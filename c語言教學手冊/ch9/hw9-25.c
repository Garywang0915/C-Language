#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str[] = "Hello, C Language";
	int i;
	
	puts(str);
	while(str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i]+32; 
		i++;
	}
	printf("Âà¤p¼g:\n");
	puts(str);

	system("pause");
	return 0;
}

