#include <stdio.h>
#include <stdlib.h>

int power(num,n);
int main(void)
{
	int i;
	int n_100, n_10, n_1;
	
	for(i=100; i<1000; i++)
	{
		//printf("%d\n", i);
		n_100 = i/100;
		n_10 = (i%100)/10;
		n_1 = i%10/1;
		//printf("%d, %d, %d\n", n_100,n_10,n_1);
		
		if(i == (power(n_100,3) + power(n_10,3) + power(n_1,3)))
			printf("%d¬OArmstrong¼Æ\n",i);
	}
	
	system("pause");
	return 0;
}

int power(int num, int n)
{
	int ans=1;
	int i;
	
	for(i=1;i<=n;i++)
		ans = ans*num;
	//printf("%d\n", ans);
	return ans;
}
