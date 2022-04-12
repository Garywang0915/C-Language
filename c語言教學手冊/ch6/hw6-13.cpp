#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int mouth;
	
	printf("請輸入月份: ");
	scanf("%d", &mouth);
	
	if ((mouth >= 3) && (mouth <= 5))
		printf("春季\n");
	else if((mouth >= 6) && (mouth <= 8))
		printf("夏季\n");
	else if((mouth >= 9) && (mouth <= 11))
		printf("秋季\n");
	else if((mouth == 12) || (mouth <= 2))
		printf("冬季\n");
	else
		printf("請重新輸入月份\n");

	system("pause");
	return 0;
}
