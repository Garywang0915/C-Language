#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct time
	{
		int hour;
		int minutes;
		double second;
	};
	
	struct time start = {12,32,25.49};
	struct time end = {15,12,17.53};
	struct time elapse = {(end.hour - start.hour),(end.minutes - start.minutes),(end.second - start.second)};
	
	if(elapse.minutes < 0)
	{
		elapse.minutes+=60;
		elapse.hour-=1;
	}
	if(elapse.second < 0)
	{
		elapse.second+=60;
		elapse.minutes-=1;
	}
	
	printf("Time of start: %02d:%02d:%4.2f\n", start.hour, start.minutes, start.second);
	printf("Time of end: %02d:%02d:%4.2f\n", end.hour, end.minutes, end.second);
	printf("Time of elapse: %02d:%02d:%4.2f\n", elapse.hour, elapse.minutes, elapse.second);
	printf("Size of time: %d\n", sizeof(start));

	system("pause");
	return 0;
}

