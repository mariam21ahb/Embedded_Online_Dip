/*
 ============================================================================
 Name        : 1.c
 Author      : mariam
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a=0;   float b=0;    float c=0;
	printf("Enter three numbers :\n");
	fflush(stdin);  fflush(stdout);
	scanf("%f %f %f",&a,&b,&c);

	if (a>c&&a>b)
	{
		printf("Largest number =%0.2f",a);
	}
	else if (b>a&&b>c)
	{
		printf("Largest number = %0.2f",b);
	}
	else
	{
		printf("Largest number =%0.2f",c);
	}
	return EXIT_SUCCESS;
}
