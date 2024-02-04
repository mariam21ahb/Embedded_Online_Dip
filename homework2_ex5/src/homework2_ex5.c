/*
 ============================================================================
 Name        : homework2_ex5.c
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
	char a;
	printf("Enter a character :");
	fflush(stdin);  fflush(stdout);
	scanf("%c",&a);
	if ('a'<a && a<'z'||'A'<a && a<'Z')
	{
		printf("%c is an alphabet",a);
	}
	else
	{
		printf("%c isn't an alphbet",a);
	}
	return EXIT_SUCCESS;
}
