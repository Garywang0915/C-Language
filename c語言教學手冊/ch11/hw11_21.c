#include <stdio.h>
#include <stdlib.h>
typedef struct data		//�����ܼ� 
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
	printf("�ǥͦW��: %s\n", st.name);
	printf("�ǥͦ��Z: %d\n", st.math);
}
