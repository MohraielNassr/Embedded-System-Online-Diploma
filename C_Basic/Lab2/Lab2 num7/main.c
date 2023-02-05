#include "stdio.h"
int main()
{
	int x;
	unsigned int factorial=1;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d" ,&x);
	if(x<0)
		printf("Error!!! Factorial of negative number does not exist.");
	else
	{
		for(int i=1;i<=x;i++){
			factorial*=i;
		}

		printf("Factorial = %u",factorial);
	}
	return 0;
}
