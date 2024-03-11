/*
 ============================================================================
 Name        : 1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float root(int x)
{
	float result;
	result=sqrt(x);
	return result;
}
int main(void) {
	int n=0;
	printf("Enter an integer : ");
	fflush(stdin);   fflush(stdout);
	scanf("%d",&n);
	printf("the root is %0.2f",root(n));
	return EXIT_SUCCESS;
}
