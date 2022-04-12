#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int arr[2][4] = {{2,3,4,5},{6,7,8,9}};
	
	printf("arr = %p\n", arr);
	printf("arr[0] = %p,  arr[1] = %p\n", arr[0], arr[1]);
	printf("arr+1 = %p\n", arr+1);
	printf("*(arr+0) = %p,  *(arr+1) = %p\n", arr+0, arr+1);	
	printf("*(arr+1)+0 = %p,  *(arr+1)+1 = %p,  *(arr+1)+2 = %p,  *(arr+1)+3 = %p,\n",\
			 *(arr+1)+0, *(arr+1)+1, *(arr+1)+2, *(arr+1)+3);
	printf("*(*(arr+1)+0) = %d,  *(*(arr+1)+1) = %d,  *(*(arr+1)+2) = %d,  *(*(arr+1)+3) = %d,\n",\
			 *(*(arr+1)+0), *(*(arr+1)+1), *(*(arr+1)+2), *(*(arr+1)+3));

	system("pause");
	return 0;
}

