/*
 ============================================================================
 Name        : homework5_ex5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define pi 3.14
#define area(r) (pi*(float)r*r)
int r;
int main(void) {
	printf("Enter the radius : ");
	fflush(stdin);   fflush(stdout);
	scanf("%d",&r);
	printf("Area = %f",area(r));
	return EXIT_SUCCESS;
}
