#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n1, n2;
	
	printf("��J�W�g�P���B");
	scanf_s("%d", &n1);
	while(n1!= -1){
		n2 = n1 / 100 * 9 + 200;
		printf("��쪺����:%d\n", n2);
		printf("��J�W�g�P���B\n");
		scanf_s("%d", &n1);
	}
	
}