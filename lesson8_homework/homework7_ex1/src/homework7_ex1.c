/*
 ============================================================================
 Name        : homework7_ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int m;
	m=29;
	int* ab;
	printf("The address of m = 0x%x\n",&m);
	printf("m=%d\n\r",m);
	ab =&m;
	printf("Now ab is assigned with the address of m \n");
	printf("Address of pointer ab is 0x%x\n",ab);
	printf("The content of ab is : %d \n\r",*ab);

	m=34;
	printf("The value of m assigned to %d now. \n",m);
	printf("Address of pointer ab is 0x%x\n",ab);
	printf("The content of ab is : %d \n\r",*ab);

	*ab=7;
	printf("The pointer variable ab is assigned with the value %d now \n",*ab);
	printf("Address of m is 0x%x\n",&m);
	printf("The content of m is : %d \n\r",m);
	return EXIT_SUCCESS;
}
