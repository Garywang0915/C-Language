#include <stdio.h>
#include <stdlib.h>

struct data
{
	char name[10];
	int math;
};

void add5(struct data *);
int main(void)
{
	struct data s1={"Gary", 77}; 
	
	printf("����e: %d\n", s1.math);
	add5(&s1);
	printf("�����: %d\n", s1.math);

	system("pause");
	return 0;
}
void add5(struct data *ptr)
{
	ptr->math+=5;
}
