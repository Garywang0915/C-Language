#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct date
	{
		int year;
		int month;
		int day;
	};
	
	struct date holiday = {2004,4,26};
	struct date festival;
	
	printf("請輸入year: ");
	scanf("%d", &festival.year);
	printf("請輸入month: ");
	scanf("%d", &festival.month);
	printf("請輸入day: ");
	scanf("%d", &festival.day);
	
	printf("Holiday:  %d/%02d/%02d\n", holiday.year, holiday.month, holiday.day);
	printf("Festival:  %d/%02d/%02d\n", festival.year, festival.month, festival.day);

	system("pause");
	return 0;
}

