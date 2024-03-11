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

char Unique(int arr[],int size)
{
	int res = 0;
	for(int i = 0; i<size; i++)
	{
		res^=arr[i];

	}
	return res;
}

int main()
{
	int arr[100],size;
	printf("Enter Array Size:");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&size);
	for(int i = 0 ; i <size ; i++)
	{
		printf("Enter Element %d:",i+1);
		fflush(stdin);  fflush(stdout);
		scanf("%d",&arr[i]);
	}
	printf("Unique Number in the array is: %d",Unique(arr,size));
	return 0;

}
