#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j;
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");	
	}
	printf("\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 11-i ; j++)
			printf("*");
		printf("\n");	
	}
	printf("\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++){
			if (i > 0 && j < i)
			{ printf(" "); }
			else 
			{ printf("*"); }
		}
			
		printf("\n");
	}
	
	
	printf("\n");
	
	
	
	
	

	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++) {
			if (i != 11 && j <11 - i)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}

		printf("\n");
	}

	
	system("pause");
	return 0;
}
