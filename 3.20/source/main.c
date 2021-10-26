#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i1;
	float n1, n2 ;
	printf("輸入正常每小時工資");
	scanf_s("%f", &n1);
	while (n1 != -1) {
		printf("輸入工作時間");
		scanf_s("%d", &i1);
		if (i1 > 40) {
			n2 = n1 * 40 + 1.5*n1*(i1 - 40);
			printf("薪資為:%f\n", n2);
			printf("輸入正常每小時工資\n");
			scanf_s("%f", &n1);
		}
		else
		{
			n2 = n1 * i1;
			printf("薪資為:%f\n", n2);
			printf("輸入正常每小時工資\n");
			scanf_s("%f", &n1);
		}
	}
	
}