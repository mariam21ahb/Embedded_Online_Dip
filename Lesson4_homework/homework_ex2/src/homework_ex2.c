/*
 ============================================================================
 Name        : homework_ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	float numbers[15];
	float average; float sum=0;

	printf("Enter the number of data : ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&n);
	for (int i=0; i<n; i++)
	{
		printf("%d.Enter number :",i+1);
		fflush(stdin);  fflush(stdout);
		scanf("%f",&numbers[i]);
	}
	for (int c =0; c<n; c++)
	{
		sum += numbers[c];
	}
	average = sum/n;
	printf("Average= %f",average);
	return EXIT_SUCCESS;
}
