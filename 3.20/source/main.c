#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i1;
	float n1, n2 ;
	printf("��J���`�C�p�ɤu��");
	scanf_s("%f", &n1);
	while (n1 != -1) {
		printf("��J�u�@�ɶ�");
		scanf_s("%d", &i1);
		if (i1 > 40) {
			n2 = n1 * 40 + 1.5*n1*(i1 - 40);
			printf("�~�ꬰ:%f\n", n2);
			printf("��J���`�C�p�ɤu��\n");
			scanf_s("%f", &n1);
		}
		else
		{
			n2 = n1 * i1;
			printf("�~�ꬰ:%f\n", n2);
			printf("��J���`�C�p�ɤu��\n");
			scanf_s("%f", &n1);
		}
	}
	
}