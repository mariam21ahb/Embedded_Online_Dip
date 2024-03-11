/*
 ============================================================================
 Name        : midterm_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int sum_of_arr (int arr[],int x )
{
	int sum=0;
	for(int j=0; j<x;j++)
	{
		sum +=arr[j];

	}
	return sum;
}
int main(void)
{
	int input[10]; int size=0;
	printf("Enter the size of array :");
	fflush(stdin);   fflush(stdout);
	scanf("%d",&size);
	for(int i=0; i<size;i++)
	{
		printf("Enter element %d: ",i+1);
		fflush(stdin);   fflush(stdout);
		scanf("%d",&input[i]);
	}

	printf("output is %d",sum_of_arr(input,size));

	return EXIT_SUCCESS;
}
