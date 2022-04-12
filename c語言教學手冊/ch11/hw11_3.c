#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct date
	{
		int year;
		int month;
		int day;
	} holiday;
	
	printf("Size of holiday: %d\n", sizeof(holiday));


	system("pause");
	return 0;
}

