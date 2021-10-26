#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n1, n2;
	
	printf("輸入上週銷售額");
	scanf_s("%d", &n1);
	while(n1!= -1){
		n2 = n1 / 100 * 9 + 200;
		printf("領到的錢為:%d\n", n2);
		printf("輸入上週銷售額\n");
		scanf_s("%d", &n1);
	}
	
}