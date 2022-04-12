#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
	int i,j;
	scanf("%d%d", &i, &j);
	bool k = (i == 3);
	printf("%d\n", k);
	k = (i == j);
	printf("%d\n", k);


	system("pause");
	return 0;
}

