/*
 ============================================================================
 Name        : homework4_ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int factorial();
int main(void)
{
	int n=0;
	printf("Enter a positive number:");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&n);
	factorial(n);
	return EXIT_SUCCESS;
}

int factorial(int x)
{
	int i=0; int f=1;
	for(i=x; i>0; i--)
	{
		f*=i;
	}
	printf("Factorial of %d =%d",x,f);
}
