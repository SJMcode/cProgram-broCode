/*
 ============================================================================
 Name        : frequencyOfEleinArray.c
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
	int a[100],f[100];
	setbuf(stdout, NULL);

	printf("Enter the array limit: ");
	scanf("%d", &n);
	printf("Enter the array elements: ");
	for(int i=0; i<n; i++){
		scanf("%d",& a[i]);
	}
	for(int i=0; i<n; i++){
			printf("%d ", a[i]);
		}printf("\n");

	for(int i=0; i<n; i++){
			f[i]=-1;
	}


	for(i=0; i<n; i++){
		c=1;
		for(j=i+1; j<n; j++){

			if(a[i] == a[j]){
				c++;
				f[j]=0;
			}


			}
			if(f[i]!=0){
				f[i]=c;
		}
	}

	for(i=0; i<n; i++){
		if(f[i]!=0)
		printf("%d occurs %d times \n", a[i], f[i]);
	}


	return EXIT_SUCCESS;
}
