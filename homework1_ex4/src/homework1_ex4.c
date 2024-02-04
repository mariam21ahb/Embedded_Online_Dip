/*
 ============================================================================
 Name        : homework1_ex4.c
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
	float x, y, product;
	printf("Enter two numbers: ");
	fflush(stdin);   fflush(stdout);
	scanf("%f %f",&x,&y);
	product = x*y;
	printf("Product: %f",product);
	return EXIT_SUCCESS;
}
