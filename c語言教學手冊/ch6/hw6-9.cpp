#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int score=0, a=0, b=0, c=0;
	int i;
	
	for(i=1;i<=10;i++)
	{
		printf("�п�J��%2d��ǥͦ��Z: ", i);
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
	printf("���ZA���H��%d�H\n���ZB���H��%d�H\n���ZC���H��%d�H\n", a, b, c); 
	
	
	system("pause");
	return 0;
	
}
