#include <stdio.h>
int fact_loop(int num); 

void main()
{
	int num, result;
	printf("Enter the number for factorial: ");
	scanf("%d", &num);
	result = fact_loop(num);
	printf("Factorial of %d is %d\n", num , result);
}

int fact_loop(int n)
{
	int i, fac=1;
		for(i = n; i > 0; i--)
	{
		fac *= i;
	}
	return fac;
}
