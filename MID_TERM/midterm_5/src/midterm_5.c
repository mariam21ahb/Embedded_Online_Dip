/*
 ============================================================================
 Name        : midterm_5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int binary_ones(int n)
{
	int j=0;
	for(;n!=0;)
	{
		if(n%2)
		{
			j++;
		}
		n/=2;
	}
	return j;
}

int main() {
	int n;
	printf("enter a decimal number  : ");
	fflush(stdout);fflush(stdin);
	scanf("%d" , &n);
	printf("%d" , binary_ones(n));
}
