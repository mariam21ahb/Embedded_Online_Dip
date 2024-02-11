/*
 ============================================================================
 Name        : homework3s_ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char stri[100];
	int n=0; int i;
	printf("Enter a string: ");
	fflush(stdin);   fflush(stdout);
	scanf("%s",&stri);

	for (i=0; stri[i]!='\0'; i++)
	{
		n = n+1;
	}
	printf("Length of string : %d", n);
	return EXIT_SUCCESS;
}
