#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a[3] = {5, 7, 9};
	int	*ptr = a;
	int i, sum1=0, sum2=0, sum3=0;
	
	// method1
	for(i=0;i<3;i++)
		sum1+=a[i];	//透過陣列元素的總和 
	printf("sum1 = %d\n", sum1);
	//method2: pointer
	for(i=0;i<3;i++)
		sum2+=*(a+i);
	printf("sum2 = %d\n", sum2);

	for(i=0;i<3;i++)
		sum3+=*(ptr+i);
	printf("sum3 = %d\n", sum3);


	system("pause");
	return 0;
}

