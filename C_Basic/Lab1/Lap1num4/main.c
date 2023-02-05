#include "stdio.h"
int main()
{
float x,y,product;
printf("Enter two numbers: ");
fflush(stdin);fflush(stdout);
scanf("%f%f" ,&x,&y);
product=x*y;
printf("product: %f" ,product);
return 0;
}

