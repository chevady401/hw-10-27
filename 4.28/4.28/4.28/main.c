#include<stdio.h>
#include<stdlib.h>

int main()
{

	int  n1, n2, n3,n4;
	printf("��J�N�X1�g�z2���~�u3������u4�s�u");
	scanf_s("%d", &n1);
	switch (n1) 
	{
		 case  1:
		  printf("�T�w�~��10000��") ;
		break;
		 case 2:
			 printf("��J�C�p�ɮ��~");
			 scanf_s("%d", &n2);
			 printf("��J�u�@�X�p��");
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
			 printf("��P�P����B");
			 scanf_s("%d", &n2);
			 n3 = n2 * .057 + 250;
			 printf("%d", n3);
			 break;
		 case 4: 
			 printf("��J�Ͳ����");
			 scanf_s("%d", &n2);
			 printf("��J�@�󪺹S��");
			 scanf_s("%d", &n3);
			 n4 = n2 * n3;
			 printf("%d", n4);

			 break;
	
	}














}