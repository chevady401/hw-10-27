#include "stdio.h"
int main() {
	int i, j;
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= (6 - i); j++) {
			printf(" ");
		}
		for (j = 1; j <= (-1 + 2 * i); j++) {
			printf("*");
		}
		printf("\n");

	}	
	for (i = 1; i <= 4; i++) {
		for (j = 1; j <= (2 + i - 1); j++) {
			printf(" ");
		}
		for (j = 1; j <= (9 - 2 * i); j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}