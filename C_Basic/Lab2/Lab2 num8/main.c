#include "stdio.h"
int main()
{
	char x;
	float num1,num2;
	printf("Enter operator either + or - or * or divide : ");
	fflush(stdin); fflush(stdout);
	scanf("%c" ,&x);
	printf("Enter two operands: ");
		fflush(stdin); fflush(stdout);
		scanf("%f%f" ,&num1,&num2);
		switch(x){
		case '+':
		printf("%.1f + %.1f = %.1f" ,num1,num2, num1+num2);
		break;
		case '-':
		printf("%.1f - %.1f = %.1f" ,num1,num2 ,num1-num2);
		break;
		case '*':
				printf("%.1f * %.1f = %.1f" ,num1,num2, num1*num2);
				break;
				case '/':
				printf("%.1f / %.1f = %.1f" ,num1,num2 ,num1/num2);
				break;
				default:
					printf("Error! operator is not correct");
					break;
			}
		return 0;
	}
