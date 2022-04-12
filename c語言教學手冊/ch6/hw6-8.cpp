#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c;
	int a2, b2, c2;
	printf("請輸入三角形的三邊長: ");
	scanf("%d %d %d", &a, &b, &c);
	
	a2 = a^2;
	b2 = b^2;
	c2 = c^2; 
	
	/*判斷是否可組成三角形*/
	if ((a+b<=c) || (a+c<=b) || (b+c<=a))
	{
		printf("無法組成三角形\n");
	}
	else
	{
		if ((a2+b2==c2) || (a2+c2==b2) || (b2+c2==a2))
		{
			printf("可以組成直角三角形\n");	
		}
		else if((a2+b2<c2) || (a2+c2<b2) || (b2+c2<a2))
		{
			printf("可以組成鈍角三角形\n");	
		}
		else
		{
			printf("可以組成銳角三角形\n");	
		} 
	}
	
	
	system("pause");
	return 0;
	
}
