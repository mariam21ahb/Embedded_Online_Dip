/*
 ============================================================================
 Name        : homework3_ex5.c
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
 int n,el;
 int a[10];

 printf("Enter no of elements :");
 fflush(stdin);   fflush(stdout);
 scanf("%d",&n);

 printf("Enter the elements: \n");
 for(int i=0; i<n; i++)
 {
	fflush(stdin);   fflush(stdout);
	scanf("%d",&a[i]);
 }
 printf("Enter the elements to be searched :");
 fflush(stdin);   fflush(stdout);
 scanf("%d",&el);

 for(int i=0; i<n; i++)
 {
	 if(el==a[i])
	 {
		 printf("Number found at the location %d",i+1);
		 break;
	 }
 }
 // printf("Element not found");

	return EXIT_SUCCESS;
}
