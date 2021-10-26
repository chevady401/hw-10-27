#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b,c,d,e;
	for (c = 1; c < 500; c++)
	{
		
		for (b = 1; b < 500; b++)
		{
			e = b * b;
			for (a = 1; a < 500; a++) {
				d = a * a;
				if (a + b > c)
				{
					if (a*a +b*b == c*c  &&  c*c <= 250000  &&  a>b)
						printf("%d,%d,%d\n", a, b, c);
				        
				};
			};
		};
	}
}