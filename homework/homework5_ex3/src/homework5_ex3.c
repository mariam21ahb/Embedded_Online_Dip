/*
 ============================================================================
 Name        : homework5_ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct Scomplex {
	float real;
	float im;
}N1, N2,sum;

float SumOfNo(float x , float y)
{
	float summ = x +y;
	return summ;
}
int main(void) {
	printf("1st complex number :\n");
	printf("Enter real and imaginary parts respectively : \n");
	fflush(stdin);		fflush(stdout);
	scanf("%f%f",&N1.real, &N1.im);
	printf("2nd complex number :");
	printf("Enter real and imaginary parts respectively :\n");
	fflush(stdin);		fflush(stdout);
	scanf("%f%f",&N2.real, &N2.im);

	sum.real= SumOfNo(N1.real, N2.real);
	sum.im = SumOfNo(N1.im , N2.im);
	printf("SUM = %0.2f +j%0.2f",sum.real,sum.im);
	return EXIT_SUCCESS;
}
