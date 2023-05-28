/*
 ============================================================================
 Name        : pattern1_fum.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {


int i,j,k,n;
setbuf(stdout, NULL);
printf("Enter number of rows: \n");
scanf("%d", &n);

for(i=1;i<=n;i++)
{
for(j=1;j<=(i*i)*2;j++)
{
printf("* ");
if(j%(i*2)==0)
printf("\n");

}
if(i==n)
break;
for(k=1;k<=3;k++)
{
printf("* \n");
}
}


	return EXIT_SUCCESS;
}
