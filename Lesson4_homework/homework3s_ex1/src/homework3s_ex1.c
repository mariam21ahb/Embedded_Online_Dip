/*
 ============================================================================
 Name        : homework3s_ex1.c
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
	char stri [100];
	char c;
	int n;  int count=0;
	printf("Enter a string : ");
	fflush(stdin);   fflush(stdout);
	gets(stri);
	printf("\r\nEnter a character to find frequency : ");
	fflush(stdin);   fflush(stdout);
	scanf("%c",&c);

	//check the frequency
	n = strlen(stri);
	for (int i=0; i<=n; i++)
	{
		if (c==stri[i])
		{
			count++;
		}
	}
	printf("Frequency of %c is %d",c,count);

	return EXIT_SUCCESS;
}
