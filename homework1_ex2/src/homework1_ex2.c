/*
 ============================================================================
 Name        : homework1_ex2.c
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
	int i;
	printf("Enter a integer:");
	fflush(stdin);   fflush(stdout);
	scanf("%i",&i);
	printf("You entered : %i",i);

	return EXIT_SUCCESS;
}
