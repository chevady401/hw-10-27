#include<stdio.h>
#include<math.h>

int main()
{
	double principal = 5000.0;
	double rate;
	printf("%4s%21s\n ", "year", " amout of desposit");
	for (rate = .1; rate <= .125; rate += 0.005)
	{
		printf("rate:%f\n", rate);
		for (unsigned int year = 1; year <= 15; ++year)
		{
			double amount = principal * pow(1.0 + rate, year);
			printf("%4u%21.2f\n", year, amount);
		}
	}
}