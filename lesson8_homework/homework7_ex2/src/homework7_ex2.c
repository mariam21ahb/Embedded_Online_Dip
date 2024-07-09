/*
 ============================================================================
 Name        : homework7_ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char alphabet='A';
	char* ptr = &alphabet;
	printf("The ALphabet are : \n");
	int i;
	for (int i =0; i<26; i++)
	{
		printf("%c  ",*ptr+i);
	}

	return EXIT_SUCCESS;
}
