/*
 ============================================================================
 Name        : homework2_ex8.c
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
	char o; float x,y;
	printf("Enter operator +,-,*,/ :");
	fflush(stdin);   fflush(stdout);
	scanf('%c',&o);
	printf("Enter two operands :");
	fflush(stdin);   fflush(stdout);
	scanf("%f %f",&x,&y);

	switch(o)
	{
	case'+':
		printf("%f + %f = %f",x,y,x+y);
		break;
	case'-':
		printf("%f - %f = %f",x,y,x-y);
		break;
	case'*':
		printf("%f * %f = %f",x,y,x*y);
		break;
	case'/':
		printf("%f / %f = %f",x,y,x/y);
		break;
	default:
		printf("Error!! you entered unvalid operator");

	}
	return EXIT_SUCCESS;
}
