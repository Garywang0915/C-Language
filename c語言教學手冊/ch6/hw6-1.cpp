 #include <stdio.h>
 #include <stdlib.h> 
 
 int main(void)
 {
 	char ch;
 	
 	printf("�п�J�r�� ");
	scanf(" %c", &ch);
 	if ((ch >= '0') & (ch <= '9')) 
 	{
 		printf("���r���O�Ʀr\n");
	} 
	else if((ch <= 'z') & (ch >= 'A'))
	{
		printf("���r���O�^��r��\n");	
	}
 	
	  	
 	system("pause");
 	return 0;
 }
