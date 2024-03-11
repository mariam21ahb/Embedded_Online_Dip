/*
 ============================================================================
 Name        : midterm_7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int summation(int num)
{
	int sum = (num*(num+1))/2 ;
	return sum;
}
int SumRange(int start,int end )
{
	int sum = summation(end) - summation(start-1);
	return sum;
}
int main()
{
	int Start_Range,End_Range;
	printf("Enter the number you want to start the sum with:");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&Start_Range);
	printf("Enter the number you want to End the sum with:");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&End_Range);
	printf("Sum = %d",SumRange(Start_Range,End_Range));


	return 0 ;
}
