/*
 ============================================================================
 Name        : reverseArray.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {


	int n,i,a[100],j,flag, count=0;
	setbuf(stdout, NULL);

		printf("Enter limit\n");
		scanf("%d", &n);

		printf("Enter numbers\n");
		for(i=0; i<n; i++){

			scanf("%d", &a[i]);
		}


		for(i=n-1; i>=0; i--){
			printf("%d ", a[i]);
		}


		for(i=0; i<n; i++){
			flag=0;

			for(j=2; j<a[i]; j++){

				if(a[i] % j ==0){
					flag=0;
					break;
				}
				else{
					flag=1;


				}
				}
				if(flag==1){
					count++;

					printf("\n%d ", count);
			}


		}



	return EXIT_SUCCESS;
}