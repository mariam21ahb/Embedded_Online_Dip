/*
 ============================================================================
 Name        : homework4_ex1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

  int prime(int no)
  {
	  int i,flag=0;
	  for(i=2; i<no/2; i++)
	  {
		  if(no%i==0)
		  {
			  flag =1;
			  break;
		  }
	  }
	  return flag;
  }
int main(void)
{
	int x, y;   int n, flag;
	printf("Enter two numbers : ");
	fflush(stdin);  fflush(stdout);
	scanf("%d %d",&x,&y);
	printf("Prime numbers between %d and %d are:",x,y);
	for(int n =x+1;n<y;n++)
	{
		flag=prime(n);         //flag= return of flag when prime takes n+1 input
		if(flag==0)
		{
			printf("%d ",n);
		}
	}

	return EXIT_SUCCESS;
}
