#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int money=0; //應付金額 
	int pay_money=0, change=0; //實付金額和找錢 
	int count_1000 = 0, count_500 = 0,  count_100 = 0,  count_50 = 0,  count_10 = 0,  count_5 = 0 ,  count_1 = 0;
	
	printf("請輸入應付金額和實付金額: ");
	scanf("%d %d", &money, &pay_money);
	
	if (pay_money < money) //付不夠 
	{
		printf("金額不夠\n");
	}
	else
	{
		change = pay_money - money; //算找錢 
		
		count_1000 = change / 1000;
		change = change - count_1000 * 1000; 
		
		count_500 = change / 500;
		change = change - count_500 * 500; 
		
		count_100 = change / 100;
		change = change - count_100 * 100; 
		
		count_50 = change / 50;
		change = change - count_50 * 50; 
		
		count_10 = change / 10;
		change = change - count_10 * 10; 
		
		count_5 = change / 5;
		change = change - count_5 * 5; 
		
		count_1 = change / 1;
		change = change - count_1 * 1; 
	}
	printf("店員需找回%2d個1000元, %2d個500元, %2d個100元, %2d個50元, %2d個10元, %2d個5元, %2d個1元\n",
			count_1000, count_500, count_100, count_50, count_10, count_5, count_1);
	

	system("pause");
	return 0;
}
