/*
 ============================================================================
 Name        : pascalTriangle.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
int i,j,n,c;
setbuf(stdout, NULL);

printf("LImit");
scanf("%d", &n);
 for(i=0; i<n; i++){

	 for(int s=0; s<n-i-1; s++){

		 printf(" ");
	 }
	 for(j=0; j<i+1; j++){
		 if(j==0){

			 c=1;
		 }
		 else{

			 c=c*(i-j+1)/j;
		 }
		 printf("%d ", c);
	 }
	 printf("\n");
 }

return EXIT_SUCCESS;
}