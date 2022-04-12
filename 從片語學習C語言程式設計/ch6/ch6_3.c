#include <stdio.h>
#include <stdlib.h>
#define ARRAYSIZE 10 

int main(void)
{
	int a[ARRAYSIZE];
	for(int i = 0;i<ARRAYSIZE;i++)
		scanf("%d", &(a[i]));
	for(int i = 0;i<ARRAYSIZE;i++)
		printf("%d\n", a[i]);

	system("pause");
	return 0;
}

