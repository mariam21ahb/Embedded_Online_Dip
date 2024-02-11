/*
 ============================================================================
 Name        : homework3_ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float m_1[2][2];
	float m_2[2][2];
	float sum[2][2];
	int r,c;
	  // taking in the elements of first matrix
	printf("Enter the elements of 1st matrix : \r\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("Enter a%d%d: ",r+1,c+1);
			fflush(stdin);  fflush(stdout);
			scanf("%f",&m_1[r][c]);
		}
	}
	  //taking in the elements of second matrix
	printf("Enter the elements of the 2nd matrix: \r\n");
	for(r=0; r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("Enter b%d%d: ",r+1,c+1);
			fflush(stdin);   fflush(stdout);
			scanf("%f",&m_2[r][c]);
		}
	}

	// calculating the summation of the two matrices
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			sum[r][c]=m_1[r][c] + m_2[r][c];
		}
	}

	// printing out the summation matrix
	printf("\r\nSum of Matrix:\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("%0.2f\t",sum[r][c]);
		}
		printf("\r\n");
	}
	return EXIT_SUCCESS;
}
