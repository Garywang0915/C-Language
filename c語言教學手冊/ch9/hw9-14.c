#include <stdio.h>
#include <stdlib.h>
#define ROW (3)
#define COL (4)

int main(void)
{
	float arr[ROW][COL] = {{18.2, 17.3, 15.0, 13.4},
						   {23.8, 25.1, 20.6, 17.8},
						   {20.6, 21.5, 18.4, 15.7}};
	int i, j;		
	float sum1[ROW], sum2[COL]; //–ぱ放, //琿放 
			
	printf("arrず甧:\n");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			printf("%4.1f  ", arr[i][j]);
			sum1[i] += arr[i][j]; //璸衡琿放羆㎝ 
			sum2[j] += arr[i][j]; //璸衡–ぱ放羆㎝ 
		}
		printf("\n");
	}
	
	printf("–ぱキА放: \n");
	for(j=0;j<COL;j++)
		printf("琍戳%d%4.1f ", j+1, sum2[j]/ROW);
	
	printf("\n琿キА放: \n");
	for(i=0;i<ROW;i++)
		printf("琿%d%4.1f ", i+1, sum1[i]/COL);
	

	system("pause");
	return 0;
}

