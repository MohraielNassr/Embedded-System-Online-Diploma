#include "stdio.h"
int main()
{
int sum,num1,num2;
printf("Enter two integers: ");
fflush(stdin); fflush(stdout);
scanf("%d%d " ,&num1,&num2);
sum=num1+num2;
printf("sum: %d" ,sum);
return 0;
}

