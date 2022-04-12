#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char ch;
	
	while((ch!=3) && (ch!=17))
	{
		ch = getch();
		printf("ASCII of ch=%d\n", ch);
	}
	printf("±z¤w«ö¤FCtrl+q or Ctrl+c ...\n");
	
	
	system("pause");
	return 0;
}

