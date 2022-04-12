#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int score=0, a=0, b=0, c=0;
	int i;
	
	for(i=1;i<=10;i++)
	{
		printf("請輸入第%2d位學生成績: ", i);
		scanf("%d", &score);
		
		if(score >= 76)
		{
			a++;
		}
		else if((score >= 60) && (score<=75))
		{
			b++;
		}
		else
		{
			c++;
		}
	}
	printf("成績A的人有%d人\n成績B的人有%d人\n成績C的人有%d人\n", a, b, c); 
	
	
	system("pause");
	return 0;
	
}
