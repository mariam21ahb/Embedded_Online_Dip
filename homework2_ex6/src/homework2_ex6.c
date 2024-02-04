/*
 ============================================================================
 Name        : homework2_ex6.c
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
	int n; int sum=0; int i;
	printf("Enter an integer :");
	fflush(stdin); fflush(stdout);
	scanf("%i",&n);

	for (i=0; i<=n; i++)
	{
		sum +=i;
	}
	printf("sum = %i",sum);
	return EXIT_SUCCESS;
}
