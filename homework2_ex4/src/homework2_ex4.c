/*
 ============================================================================
 Name        : homework2_ex4.c
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
	float a;
	printf("Enter a number : ");
	fflush(stdin);   fflush(stdout);
	scanf("%f",&a);
	if(a>0)
	{
		printf("%f is positive",a);
	}
	else if (a<0)
	{
		printf("%f is negative",a);

	}
	else
	{
		printf("You entered Zero");
	}
	return EXIT_SUCCESS;
}
