/*
 ============================================================================
 Name        : homework5_ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct Sdistance {
	float feet;
	float inch;
};
struct Sdistance d1, d2, sum;
int main(void)
{
	// taking in dimensions of d1
	printf("Enter information for 1st distance: \n");
	printf("Enter feet: \n");
	fflush(stdin);		fflush(stdout);
	scanf("%f",&d1.feet);
	printf("Enter inches: \n");
	fflush(stdin);		fflush(stdout);
	scanf("%f",&d1.inch);

	// taking in dimensions of d2
		printf("Enter information for 2nd distance: \n");
		printf("Enter feet: \n");
		fflush(stdin);		fflush(stdout);
		scanf("%f",&d2.feet);
		printf("Enter inches: \n");
		fflush(stdin);		fflush(stdout);
		scanf("%f",&d2.inch);

		//adding the two distances
		sum.feet = d1.feet + d2.feet;
		sum.inch = d1.inch + d2.inch;
		if(sum.inch>12.0)
		{
			sum.inch = sum.inch-12.0;
			sum.feet = sum.feet+1;

		}
		printf("Sum of distances= %0.2f' - %0.2f\" ",sum.feet,sum.inch);

	return EXIT_SUCCESS;
}
