#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int hr=0;
	int salary_time=75;
	float money = 0;
	
	printf("請輸入工作時數 ");
	scanf("%d", &hr);
	
	if(hr <= 60)
	{
		money = salary_time * hr;
		printf("實領薪水為: %f \n", money);
	}
	else if((hr >= 61) && (hr <= 75))
	{
		money = 60 * salary_time + (hr-60) * salary_time * 1.25; 
		printf("實領薪水為: %f \n", money);
	}
	else if(hr > 75)
	{
		money = (60 * salary_time) + (15) * salary_time * 1.25 + (hr-75) * salary_time * 1.75; 
		printf("實領薪水為: %f \n", money);
	}
	else
	{
		printf("您輸入的時間不正常");
	}
	
	system("pause");
	return 0;
}
