#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int i,j,k;
	scanf("%d%d%d", &i, &j, &k);
	int max = (i>j) ? i : j;
	if(k > max)
		max = k;
	printf("%d\n", max); 

	system("pause");
}

