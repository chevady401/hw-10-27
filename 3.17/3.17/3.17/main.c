#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n1;
	float  n2, n3, n4, n5, n6;
	printf("請輸入帳號");
	scanf_s("%d", &n1);
	while (n1 != -1) 
	{
		printf("enter beginning balance:");
		scanf_s("%f", &n2);
		printf("enter total charge:");
		scanf_s("%f", &n3);
		printf("enter total credit:");
		scanf_s("%f", &n4);
		printf("enter limit:");
		scanf_s("%f", &n5);
		n6 = n2 + n3 - n4;
		if (n6 > n5)
		{
			printf("帳號為:%d\n", n1);
			printf("balance:%f\n", n6);
			printf("請輸入帳號");
			scanf_s("%d", &n1);
		};
	}
}
		
			
	
