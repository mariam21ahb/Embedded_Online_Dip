/*
 ============================================================================
 Name        : homework4_ex4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
int x,y;
printf("Enter base Number: \n");
fflush(stdin);  fflush(stdout);
scanf("%d",&x);
printf("Enter power Number: \n");
fflush(stdin);  fflush(stdout);
scanf("%d",&y);
printf("%d^%d = %d\n",x,y,get_power(x,y));
return 0;
}

int get_power(int n, int m){
if(m==1){return n;}
return n*get_power(n,m-1);
}



