#include <stdio.h>
#include <stdlib.h>
typedef struct data		//全域變數 
{
	char name[10];
	int math;
} SCORE;

void display(SCORE);
int main(void)
{
	SCORE s1= {"Jenny",74};
	
	display(s1);

	system("pause");
	return 0;
}

void display(struct data st)
{
	printf("學生名稱: %s\n", st.name);
	printf("學生成績: %d\n", st.math);
}
