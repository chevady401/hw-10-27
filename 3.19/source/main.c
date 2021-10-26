#include<stdio.h>
#include<stdlib.h>

int main()
{
	float n1, n2,n3,n4;
	printf("輸入資金");
	scanf_s("%f",&n1);
	while(n1 != -1 )
	{
		printf("輸入利率\n");
		scanf_s("%f", &n2);
		printf("輸入天數\n");
		scanf_s("%f", &n3);
		n4 = n1 * n2 *n3 / 365;
		printf("interest charge is : %f\n", n4);
		printf("輸入資金");
		scanf_s("%f", &n1);
	}
}