#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int hr=0;
	int salary_time=75;
	float money = 0;
	
	printf("�п�J�u�@�ɼ� ");
	scanf("%d", &hr);
	
	if(hr <= 60)
	{
		money = salary_time * hr;
		printf("����~����: %f \n", money);
	}
	else if((hr >= 61) && (hr <= 75))
	{
		money = 60 * salary_time + (hr-60) * salary_time * 1.25; 
		printf("����~����: %f \n", money);
	}
	else if(hr > 75)
	{
		money = (60 * salary_time) + (15) * salary_time * 1.25 + (hr-75) * salary_time * 1.75; 
		printf("����~����: %f \n", money);
	}
	else
	{
		printf("�z��J���ɶ������`");
	}
	
	system("pause");
	return 0;
}
