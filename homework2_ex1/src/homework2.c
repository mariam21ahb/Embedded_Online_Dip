/*
 ============================================================================

 Name        : homework2.c
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
	int a;
	printf("Enter an integer you want to check :\n");
	fflush(stdin);   fflush(stdout);
	scanf("%i",&a);
	if (a%2==0)
	{
		printf("%i is even",a);
	}
	else if (a%2 !=0)
	{
		printf("%i is odd",a);
	}

	return EXIT_SUCCESS;
}
