/*
 ============================================================================
 Name        : array_searchItem.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	int i, search,limit, arr[6],flag=0;
setbuf(stdout, NULL);
printf("Limit");
scanf("%d", &limit);
printf("Enter array values");
	for(i=1; i<=limit; i++){

		scanf("%d", &arr[i]);
	}
	printf("Enter search key");
	scanf("%d", &search);
	for(i=1; i<=limit; i++){

		if(arr[i]==search){
			flag=1;
			break;
		}

	}
	if(flag==1){
		printf("Item %d found at position %d", search,i);
	}
	else{
		printf("Item not found");
	}

	return EXIT_SUCCESS;
}
