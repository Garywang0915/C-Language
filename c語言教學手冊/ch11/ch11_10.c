#include <stdio.h>
#include <stdlib.h>

struct data		//全域變數 
{
	char name[10];
	int math;
};

void display(struct data st);
int main(void)
{
	struct data s1= {"Jenny",74};
	
	display(s1);

	system("pause");
	return 0;
}

void display(struct data st)
{
	printf("學生名稱: %s\n", st.name);
	printf("學生成績: %d\n", st.math);
}
