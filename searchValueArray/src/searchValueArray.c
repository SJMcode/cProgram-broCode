/*
 ============================================================================
 Name        : searchValueArray.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <conio.h>

int main(void) {

	int i,search_key, arr[100],limit;

	printf("Enter array limit\n");
	scanf("%d",&limit);
	printf("Enter array values\n");
	for(i=0; i<limit; i++ ){
		scanf("%d",&arr[i]);
	}

	printf("Enter search value\n");
		scanf("%d",&search_key);
	for(i=0; i<limit; i++ ){
		if(search_key == arr[i]){
			printf("Item found at the position: %d", i+1);
			break;
		}
	}




	return 0;
}
