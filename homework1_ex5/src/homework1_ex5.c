/*
 ============================================================================
 Name        : homework1_ex5.c
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
	char c;
	printf("Enter a character :");
	fflush(stdin);   fflush(stdout);
	scanf("%c",&c);
	printf("ASCII value of %c is %d",c,c);
	return EXIT_SUCCESS;
}
