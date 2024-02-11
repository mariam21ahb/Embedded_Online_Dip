/*
 ============================================================================
 Name        : homework3_ex4.c
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
  int array[10];
  int n=0; int el,lo;
   printf("Enter no of elements : ");
   fflush(stdin);   fflush(stdout);
   scanf("%d",&n);

   //initializing the array
   //printf("Enter the elements of array: \n ");
   for(int i=0; i<n; i++)
   {
	   fflush(stdin);   fflush(stdout);
	   scanf("%d",&array[i]);

   }

   printf("Enter the element to be inserted : \n");
   fflush(stdin);   fflush(stdout);
   scanf("%d",&el);
   printf("Enter the location : \n");
   fflush(stdin);   fflush(stdout);
   scanf("%d",&lo);
    // moving the values after desired location one step
   for (int i=n; i>=lo; i--)
   {
	   array[i]=array[i-1];
   }
   n++;
   array[lo-1]=el;

   //printing the new array
   for(int i=0; i<n; i++)
   {
	   printf("%d\t",array[i]);
   }

	return EXIT_SUCCESS;
}
