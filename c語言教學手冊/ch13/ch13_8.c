#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i;
	
	printf("argc���Ȭ�%d\n", argc);
	for(i=0;i<argc;i++)
		printf("argv[%d] = %s", i, argv[i]);

	system("pause");
	return 0;
}

/* �R�O���ܦr���U��J 
C:\Users\GaryWang>cd C:\Users\GaryWang\Documents\C�y���m��\c�y���оǤ�U\ch13\

C:\Users\GaryWang\Documents\C�y���m��\c�y���оǤ�U\ch13>ch13_8 Time is money!
*/
