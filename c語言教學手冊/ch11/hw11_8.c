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
	
	struct date
	{
		int year;	// 4
		int month;	// 4 
		int day;	//	4
		struct time s1;	// 16
	};
	
	struct date now = {2022,4,3,{6,26,40.27}};
	
	printf("�{�b�ɶ��� %02d/%02d/%d  %02d:%02d:%4.2f\n", now.month, now.day, now.year,\
	 now.s1.hour, now.s1.minutes, now.s1.second);
	printf("Sizeof date: %d\n", sizeof(now));	//	4*3+16=28 -> �ݥH�Ҧ��̦h����ƫ��A�����Ƭ��D: 16*2=32

	system("pause");
	return 0;
}

