#include <stdio.h>
#include <stdlib.h>

int cnt;
void count(void);

int main(int argc, char *argv[]) 
{
	printf("�п�Jcnt�����: ");
	scanf("%d", &cnt);
	
	count(); //�Ĥ@������ 
	count(); //�ĤG������ 
	
	cnt++;
	printf("cnt=%d\n", cnt);
	
	system("pause");
	return 0;
}
