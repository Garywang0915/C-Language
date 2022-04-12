#include <stdio.h> 
#include <stdlib.h>

int power(int x, int y);
int main(void)
{
	int x, y;
	
	x=5;
	y=3;
	
	printf("%d的%d次方為%d\n", x, y, power(x,y));
	system("pause");
	return 0;
}

int power(int x, int y)
{
	int ans=1;
	int i;
	
	for(i<0;i<=y;i++)
		ans*=x;
	
	return ans;
}
