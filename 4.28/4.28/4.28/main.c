#include<stdio.h>
#include<stdlib.h>

int main()
{

	int  n1, n2, n3,n4;
	printf("輸入代碼1經理2時薪工3抽佣金工4零工");
	scanf_s("%d", &n1);
	switch (n1) 
	{
		 case  1:
		  printf("固定薪水10000元") ;
		break;
		 case 2:
			 printf("輸入每小時時薪");
			 scanf_s("%d", &n2);
			 printf("輸入工作幾小時");
			 scanf_s("%d", &n3);
			 if (n3 > 40) 
			 {
				 n4 = (n3 - 40)*n2*1.5 + 40 * n2;
				 printf("%d", n4);
			 }
			 else
			 {
				 n4 = n2 * n3;
				 printf("%d", n4);
			 };
			 break;
		 case 3:
			 printf("當周銷售金額");
			 scanf_s("%d", &n2);
			 n3 = n2 * .057 + 250;
			 printf("%d", n3);
			 break;
		 case 4: 
			 printf("輸入生產件數");
			 scanf_s("%d", &n2);
			 printf("輸入一件的酬勞");
			 scanf_s("%d", &n3);
			 n4 = n2 * n3;
			 printf("%d", n4);

			 break;
	
	}














}