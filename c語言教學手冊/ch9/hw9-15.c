#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int arr[3][2][4] = {{{1,2,3,4},
						 {5,6,7,8}},
						{{9,10,11,12},
						 {13,14,15,16}},
						{{17,18,19,20},
						 {21,22,23,24}}};
	int i,j,k,sum=0;
	
	for(i=0;i<3;i++)
		for(j=0;j<2;j++)
			for(k=0;k<4;k++)
				sum+=arr[i][j][k];
	printf("Á`©M¬°%d\n", sum);

	system("pause");
	return 0;
}

