#include <stdio.h>
#include <stdlib.h>
#define MAX (255)

int main(void)
{
	int pic[3][4][5] = {{{247, 67, 32,187,240},
						 {122, 41, 21, 16,154},
						 { 52, 35, 79, 21, 93},
						 { 27, 22, 35,154, 75}}, 
						{{ 14,145,132, 25, 40},
						 {212,221,121, 54, 14},
						 {132,235,175, 19, 14},
						 {122,122,133, 54, 47}},
						{{ 17, 44, 32,127,240},
						 { 22,231, 21,156,124},
						 { 32, 35, 78, 21,194},
						 {127, 22,133, 54, 45}}};
	int i,j,k;
	
	//	Show pics
	printf("Old Pic: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			for(k=0;k<5;k++)
			{
				printf("%4d",pic[i][j][k]);		
			}
			printf("\n");
		}
		printf("\n");
	}
	
	for(i=1;i<2;i++) //¶È¹ïg­È¥[30  
	{
		for(j=0;j<4;j++)
		{
			for(k=0;k<5;k++)
			{
				pic[i][j][k]-=30;
				if(pic[i][j][k]<0)
					pic[i][j][k] = 0;		
			}
		}
	}
	
	printf("New Pic: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			for(k=0;k<5;k++)
			{
				printf("%4d",pic[i][j][k]);		
			}
			printf("\n");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}

