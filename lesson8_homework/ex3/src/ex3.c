/*
 ============================================================================
 Name        : ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char inp [20];
	char rev[20];
	char* ptr = inp;
	char* ptrv= rev;
	int i=0;
	printf("Enter the text: ");
	fflush(stdin);		fflush(stdout);
	scanf("%s",inp);

	//counting elements entered into inp
	while(*ptr)
	{
		ptr++;
		i++;
	}
	ptr--;

	//reversing the array

	for(int j =0; j<i;j++)
	{
		*ptrv = *ptr;
		ptr--;
		ptrv++;
	}
	*ptrv = '\0';
	printf("%s",rev);
	return EXIT_SUCCESS;
}
