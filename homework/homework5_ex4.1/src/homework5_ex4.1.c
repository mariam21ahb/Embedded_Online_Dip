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

struct Sstudent {
	char name[30];
	//int roll;
	float marks;
};
struct Sstudent roller[10];

int main(void) {
	printf("Enter information of students: \n");
	for (int i=0; i<10; i++)
	{
		printf("For roll number %i\n",i+1);
		printf("Enter name : ");
		fflush(stdin);		fflush(stdout);
		scanf("%s",roller[i].name);
		printf("\nEnter marks  : ");
		fflush(stdin);		fflush(stdout);
		scanf("%f",&roller[i].marks);
	}

	printf("\nDisplay information of students: \n");
	for (int i=0; i<10; i++)
	{
	printf("Info for roll no %i\n",i+1);
	printf("Name: %s \n",roller[i].name);
	printf("Marks: %f \n",roller[i].marks);
	}


	return EXIT_SUCCESS;
}
