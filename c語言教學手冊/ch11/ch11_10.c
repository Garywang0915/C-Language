#include <stdio.h>
#include <stdlib.h>

struct data		//�����ܼ� 
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
	printf("�ǥͦW��: %s\n", st.name);
	printf("�ǥͦ��Z: %d\n", st.math);
}
