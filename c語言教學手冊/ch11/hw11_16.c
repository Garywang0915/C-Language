#include <stdio.h>
#include <stdlib.h>

struct time
{
	int hour;
	int minutes;
	double second;
};

void display(struct time, struct time, struct time);
int main(void)
{
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
	display(start,end,elapse);
	
	system("pause");
	return 0;
}
void display(struct time t1, struct time t2, struct time t3)
{
	printf("Time of start: %02d:%02d:%4.2f\n", t1.hour, t1.minutes, t1.second);
	printf("Time of end: %02d:%02d:%4.2f\n", t2.hour, t2.minutes, t2.second);
	printf("Time of elapse: %02d:%02d:%4.2f\n", t3.hour, t3.minutes, t3.second);
}
