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

void rev_arr(int size , int a[] ,int b[] )
{
	int i , j ;
	for(i=size-1,j=0;i>=0;i--,j++)
		b[j] = a[i];

printf("result of reverse array is : ");
fflush(stdout); fflush(stdin);
for(i=0;i<size;i++)
{
	printf("%d  ",b[i]);
	fflush(stdout); fflush(stdin);
}
}
int main()

{
int s , a[100] , b[100] , i ;
printf("please enter the size : ");
fflush(stdout); fflush(stdin);
scanf("%d" , &s);
printf("enter the array :\n ");
fflush(stdout); fflush(stdin);
for(i=0;i<s;i++)
{
	printf("enter element %d : " , i+1);
	fflush(stdout); fflush(stdin);
	scanf("%d" , &a[i]);
}
rev_arr(s,a,b);
}
