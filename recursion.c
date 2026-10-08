#include <stdio.h>
int fact_rec(int num); 

void main()
{
	int num, result;
	printf("Enter the number for factorial: ");
	scanf("%d", &num);
	result = fact_rec(num);
	printf("Factorial of %d is %d\n", num , result);
}

int fact_rec(int n)
{
	if (n == 0){
		return 1;
	}	
	else{
		return (n*fact_rec(n-1));
	}
}
