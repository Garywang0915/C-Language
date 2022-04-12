#include <stdio.h> 
#include <stdlib.h>

int cub(int x);

int main(void)
{
	int a=5;
	
	printf("%d的3次方為%d\n", a, cub(a));
	system("pause");
	return 0;
}

int cub(int x)
{
	int ans;
	ans = x*x*x;
	return ans;
}
