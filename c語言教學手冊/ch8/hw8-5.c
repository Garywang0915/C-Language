#include <stdio.h> 
#include <stdlib.h>

int mod(int x, int y);

int main(void)
{
	int a, b;
	
	a = 17;
	b = 5;
	
	printf("%d/%d���l�Ƭ� %d \n", a, b, mod(a,b));
	
	system("pause");
	return 0;
}

int mod(int x, int y)
{
	int ans;
	ans = x%y;
	return ans;
}
