#include "stdio.h"
int main()
{
	float x;
	printf("Enter a numbers: ");
		fflush(stdin); fflush(stdout);
		scanf("%f" ,&x);
		if(x>0)
			printf("%.2f is positive.",x);
		else if(x<0)
			printf("%.2f is negative.",x);
		else
			printf("you entered zero.");
		return 0;
}
