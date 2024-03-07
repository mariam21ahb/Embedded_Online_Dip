/*
 ============================================================================
 Name        : homework4_ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char sent_reverse();
int main(void)
{
	char string[100];   int n=0;
	printf("Enter a sentence :");
	fflush(stdin);   fflush(stdout);
	gets(string);
	n=strlen(string);
	sent_reverse(n,string);


	return EXIT_SUCCESS;
}

  char sent_reverse(int x, char reverse[])
  {
	  int i=0; int j=0; char text[100];
	  for(i=x-1; i>=0; i--)
	  {
		  text[j]=reverse[i];
		  j++;
	  }
	  printf("%s",text);
  }
