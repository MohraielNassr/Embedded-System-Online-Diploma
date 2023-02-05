#include "stdio.h"
int main()
{
	float a,b,temp;
	printf("Enter value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%f" ,&a);
	printf("Enter value of b: ");
		fflush(stdin); fflush(stdout);
		scanf("%f" ,&b);
		//value of a is assigned to temp
		temp=a;
		//value of b is assigned to a
		a=b;
		//value of temp is assigned to b
		b=temp;
		printf("After swapping, value of a = %.2f" ,a);
		printf("\nAfter swapping, value of b = %.2f" ,b);
		return 0;
}

