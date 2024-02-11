/*
 ============================================================================
 Name        : homework3s_ex3.c
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
	char stri[100];  char reverse[100];
	int n; unsigned int x;
	printf("Enter the string : ");
	fflush(stdin);  fflush(stdout);
	gets(stri);


	n=strlen(stri)-1;
	x=n;
	for (int i=0; i<=n; i++)
	{
		reverse[i]=stri[x];
		--x;
	}
	printf("Reverse string is : %s",reverse);

	return EXIT_SUCCESS;
}
