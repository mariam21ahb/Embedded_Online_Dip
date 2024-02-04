/*
 ============================================================================
 Name        : homework2_ex2.c
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
	printf("Enter an alphabet in lowercase:");
	fflush(stdin);    fflush(stdout);
	scanf("%c",&c);

	if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	{
		printf("%c is a vowel",c);
	}
	else
	{
		printf("%c is a consonant",c);
	}
	return EXIT_SUCCESS;
}
