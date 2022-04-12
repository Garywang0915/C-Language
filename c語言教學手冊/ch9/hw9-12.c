#include <stdio.h>
#include <stdlib.h>
#define ROW (4)
#define COL (3)

int main(void)
{
	int i ,j;
	int array[ROW][COL] = {{3,9,2},
						   {3,5,7},
						   {6,0,4},
						   {6,10,14}};
	int min, min_x_index, min_y_index;
	
	min = array[0][0];
	
	for(i=0;i<ROW;i++)
		for(j=0;j<COL;j++)
			if(array[i][j] < min)
			{
				min = array[i][j];
				min_x_index = i;
				min_y_index = j;
			}
	printf("°}¦C³Ì¤p­È¬°array[%d][%d] = %d\n", min_x_index, min_y_index, min);
	
	system("pause");
	return 0;
}

