#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
	float a, b, c;
	double judge = 0;
	double x1, x2;
	
	printf("�п�J�@���G����{�� ax^2 + bx+ c = 0\n");
	scanf("%f %f %f", &a, &b, &c);
	
	judge = pow(b, 2) - 4 * a * c;
	printf("%f\n", judge);
	
	if(judge > 0) 
	{
		x1 = (-b + sqrt(judge))/(2 * a);
		x2 = (-b - sqrt(judge))/(2 * a);
		
		printf("��{������ӹ��:\n");
		printf("%lf, %lf\n", x1, x2);
	}
	else if(judge = 0)
	{
		x1 = -b/(2 * a);
		x2 = -b/(2 * a);
		
		printf("��{������ӬۦP���:\n");
		printf("%lf, %lf\n", x1, x2);
	}
	else
	{
		printf("�S���\n");
	}

	system("pause");
	return 0;
}
