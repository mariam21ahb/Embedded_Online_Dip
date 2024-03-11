/*
 ============================================================================
 Name        : midterm_9.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

char MAX(char num)
{
	char count = 0;
	while(num!=0)
	{
		num = (num&(num<<1));
		count++;
	}
	return count;
}


int main()
{
	int number;
	printf("Enter a number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&number);
	printf("  %d \t",MAX(number));
	return 0;
}
