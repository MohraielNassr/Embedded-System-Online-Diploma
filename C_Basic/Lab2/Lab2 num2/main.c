#include "stdio.h"
int main()
{
	char x;
	printf("Enter an alphabet: ");
	fflush(stdin); fflush(stdout);
	scanf("%c" ,&x);
	if(x=='a'||x=='A'||x=='e'||x=='i'||x=='I'||x=='o'||x=='O'||x=='u'||x=="U")
		printf("%c is a vowel");
	else
		printf("%c is a consonant");
	return 0;
}
