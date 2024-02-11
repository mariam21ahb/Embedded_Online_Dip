/*
 ============================================================================
 Name        : homework3_ex3.c
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
  float matrix [10][10];
  int r,c;
  float transpose [10][10];

  printf("Enter rows and columns of matrix:");
  fflush(stdin);  fflush(stdout);
  scanf("%d %d",&r,&c);

  printf("\nEnter elements of matrix: \n");
  for(int i =0; i<r;i++)
  {
	  for (int j=0; j<c; j++)
	  {
		  printf("\n Enter element a%d%d: ",i+1,j+1);
		  fflush(stdin);  fflush(stdout);
		  scanf("%f",&matrix[i][j]);
	  }
  }

  printf ("Entered matrix :\n");
  for(int i =0; i<r;i++)
  {
	  for (int j=0; j<c; j++)
	  {
		  printf("%0.2f\t",matrix[i][j]);
	  }
	  printf("\n\n");
  }

  for(int i=0; i<c; i++)
  {
	  for(int j=0; j<r; j++)
	  {
		  transpose[j][i]=matrix[i][j] ;

	  }
  }
  printf("the Transpose matrix is \n");
  for(int i=0; i<c; i++)
    {
  	  for(int j=0; j<r; j++)
  	  {
  		  printf("%0.2f\t",transpose[i][j]);
  	  }
  	  printf("\n");
    }

	return EXIT_SUCCESS;
}
