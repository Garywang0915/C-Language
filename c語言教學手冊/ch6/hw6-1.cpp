 #include <stdio.h>
 #include <stdlib.h> 
 
 int main(void)
 {
 	char ch;
 	
 	printf("請輸入字元 ");
	scanf(" %c", &ch);
 	if ((ch >= '0') & (ch <= '9')) 
 	{
 		printf("此字元是數字\n");
	} 
	else if((ch <= 'z') & (ch >= 'A'))
	{
		printf("此字元是英文字母\n");	
	}
 	
	  	
 	system("pause");
 	return 0;
 }
