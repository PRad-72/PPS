#include <stdio.h>

void main()
{
	int n,fac=1;
	printf("Enter the number for factorial: ");
	scanf("%d", &n);
	for(int i = n; i > 0; i--)
	{
		fac *= i;
	}
	printf("Factorial of %d is %d\n", n , fac);
}
