#include<stdio.h>
#include<stdlib.h>

int main()
{
	float n1, n2,n3,n4;
	printf("��J���");
	scanf_s("%f",&n1);
	while(n1 != -1 )
	{
		printf("��J�Q�v\n");
		scanf_s("%f", &n2);
		printf("��J�Ѽ�\n");
		scanf_s("%f", &n3);
		n4 = n1 * n2 *n3 / 365;
		printf("interest charge is : %f\n", n4);
		printf("��J���");
		scanf_s("%f", &n1);
	}
}