/*
 ============================================================================
 Name        : midterm_4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


void reverse(int x)
{
	int i=0;
	for(i=0;x!=0;)
	{
		i=x%10;
		x/=10;
		printf("%d",i);
	}
}
int main(void) {
	int n;
	printf("Enter the number you want to reverse : ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&n);
	reverse(n);
	return EXIT_SUCCESS;
}
