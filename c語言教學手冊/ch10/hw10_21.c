#include <stdio.h>
#include <stdlib.h>

void display(char *ptr, int n); //�����@�Ӧr�ꪺ�����ܼ�, �åB�q��n�Ӧr���}�l��ܨ�r�굲�� 
int main(void)
{
	char *str = "We are best friends";
	int n;
	
	do
	{
		printf("Plese input a num(>0): ");
		scanf("%d", &n);
	}while(n<=0);
	
	display(str, n);

	system("pause");
	return 0;
}
void display(char *ptr, int n)
{
	printf("%s\n", ptr+n-1);	//��ptr�q���V��1�ӧ���V��n�� 
}
