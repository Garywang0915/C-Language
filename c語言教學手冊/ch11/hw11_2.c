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
	
	printf("�п�Jyear: ");
	scanf("%d", &festival.year);
	printf("�п�Jmonth: ");
	scanf("%d", &festival.month);
	printf("�п�Jday: ");
	scanf("%d", &festival.day);
	
	printf("Holiday:  %d/%02d/%02d\n", holiday.year, holiday.month, holiday.day);
	printf("Festival:  %d/%02d/%02d\n", festival.year, festival.month, festival.day);

	system("pause");
	return 0;
}

