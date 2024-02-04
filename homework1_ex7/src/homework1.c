/*
 ============================================================================


 Name        : homework1.c
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
	float a, b;
      printf("Enter value of a: ");
      scanf("%f",&a);
      printf("Enter value of b: ");
      scanf("%f",&b);

      printf("\nAfter swapping, value of a = %.2f\n", b);
      printf("After swapping, value of b = %.2f", a);
      return 0;
}
