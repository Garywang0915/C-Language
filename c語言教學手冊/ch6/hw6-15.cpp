#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int money=0; //���I���B 
	int pay_money=0, change=0; //��I���B�M��� 
	int count_1000 = 0, count_500 = 0,  count_100 = 0,  count_50 = 0,  count_10 = 0,  count_5 = 0 ,  count_1 = 0;
	
	printf("�п�J���I���B�M��I���B: ");
	scanf("%d %d", &money, &pay_money);
	
	if (pay_money < money) //�I���� 
	{
		printf("���B����\n");
	}
	else
	{
		change = pay_money - money; //���� 
		
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
	printf("�����ݧ�^%2d��1000��, %2d��500��, %2d��100��, %2d��50��, %2d��10��, %2d��5��, %2d��1��\n",
			count_1000, count_500, count_100, count_50, count_10, count_5, count_1);
	

	system("pause");
	return 0;
}
