/*
 ============================================================================
 Name        : skip2AfterOccuranceofaNonprime.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a[30],n,m,i,j,flag,k=0;
	setbuf(stdout, NULL);
	printf("Enter size of array: \n");
	scanf("%d", &n);
	printf("Array elemets: ");
	for(int i=0; i<n; i++){
		scanf("%d" , &a[i]);
	}

	for(i=0; i<n; i++){
		m=a[i]/2;
		for(j=2; j<=m; j++){
			if(a[i]%j == 0){
				flag=0;
				break;
			}
		}
		if(flag==0){
			b[k] = a[i];
			i=i+2;
			k++;

		}
		else{
			b[k] = a[i];
		}
	}

	for(i=0; i<k; i++){
		printf("%d ", b[i] );
	}

	return EXIT_SUCCESS;
}
