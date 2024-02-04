/*
 ============================================================================
 Name        : homework2_ex7.c
 Author      : mariam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n=0;
	int factorial =1; int i=1;
	printf("Enter an integer :");
	fflush(stdin);   fflush(stdout);
	scanf("%d",&n);

	if (n>0)
	{
		for (i=1; i<=n; ++i)
		{
			factorial *=i;
		}
		printf("Factorial = %i",factorial);
	}
	else if (n<0)
	{
		printf("Error!! Factorial of negative number doesn't exist");
	}

	return EXIT_SUCCESS;
}
