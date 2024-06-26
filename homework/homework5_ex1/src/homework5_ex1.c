/*
 ============================================================================
 Name        : homework5_ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


struct Sstudent{
	char Name[30];
	unsigned int roll_no;
	float marks;
};
struct Sstudent information;

int main(void)
{
	//taking in the information
	printf("Enter information of students: \n");
	printf("Enter name: \n");
	fflush(stdin);		fflush(stdout);
	scanf("%s",information.Name);
	printf("Enter roll number: \n");
	fflush(stdin);		fflush(stdout);
	scanf("%d",&information.roll_no);
	printf("Enter marks: \n");
	fflush(stdin);		fflush(stdout);
	scanf("%f",&information.marks);

	//printing the info
	printf("Displaying information\n");
	printf("name: %s\n",information.Name);
	printf("Roll: %d\n",information.roll_no);
	printf("Marks: %0.2f\n",information.marks);
	return EXIT_SUCCESS;
}
