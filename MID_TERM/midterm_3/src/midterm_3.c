/*
 ============================================================================
 Name        : midterm_3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int prime(int numb);

int main() {
			int a , z , i , f ;
			printf("enter 2 number (intervals) : \n");
			fflush(stdout);fflush(stdin);
			scanf("%d %d" , &a , &z);
			printf(" prime number between %d and %d are : " , a , z );
			for(i=a;i<=z;i++)
			{
				f=prime(i);
				if(f==0)
					printf("%d  " , i);
			}

			}
int prime(int numb)
{
	int j , f = 0;
	for(j=2 ; j<=numb/2 ; j++)
	{
		if(numb%j==0)
		{
			f=1;
		break;
		}
	}
	return f;
}
