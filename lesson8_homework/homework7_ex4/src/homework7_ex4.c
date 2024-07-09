/*
 ============================================================================
 Name        : homework7_ex4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int inputs [15];
	int* ptr= inputs;
	int i=0;

	printf("Enter no of element : ");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&i);

	for(int j=0; j<i; j++)
	{
		printf("\nElement %d:",j+1);
		fflush(stdin);    fflush(stdout);
		scanf("%d",ptr);
		ptr++;
	}
	ptr--;
	for(int j=i; j>0;j--)
	{
		printf("\nElement %d = %d",j,*ptr);
		ptr--;
	}
	return EXIT_SUCCESS;
}
