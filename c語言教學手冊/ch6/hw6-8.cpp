#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c;
	int a2, b2, c2;
	printf("�п�J�T���Ϊ��T���: ");
	scanf("%d %d %d", &a, &b, &c);
	
	a2 = a^2;
	b2 = b^2;
	c2 = c^2; 
	
	/*�P�_�O�_�i�զ��T����*/
	if ((a+b<=c) || (a+c<=b) || (b+c<=a))
	{
		printf("�L�k�զ��T����\n");
	}
	else
	{
		if ((a2+b2==c2) || (a2+c2==b2) || (b2+c2==a2))
		{
			printf("�i�H�զ������T����\n");	
		}
		else if((a2+b2<c2) || (a2+c2<b2) || (b2+c2<a2))
		{
			printf("�i�H�զ��w���T����\n");	
		}
		else
		{
			printf("�i�H�զ��U���T����\n");	
		} 
	}
	
	
	system("pause");
	return 0;
	
}
