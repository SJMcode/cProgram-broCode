/*
 ============================================================================
 Name        : ArrayFunction_get_disp_fum.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


void getArray(int limit, int arr1[50][50], int arr2[50][50]);
void addArray(int limit, int arr1[][50], int arr2[][50], int sum[][50]);
void displayArray(int limit, int sum[][50]);

int main(void) {
	 int limit;
	    int arr1[50][50], arr2[50][50], sum[50][50];
	    setbuf(stdout, NULL);
	    printf("Enter the size of the array: ");
	    scanf("%d", &limit);

	    getArray(limit, arr1, arr2);
	    addArray(limit, arr1, arr2, sum);
	    displayArray(limit, sum);

    return EXIT_SUCCESS;
}

void getArray(int limit, int arr1[][50], int arr2[][50]) {
	printf("Enter the values of array 1 \n");
	for (int i = 0; i < limit; i++) {
		for (int j = 0; j < limit; j++) {

			scanf("%d", &arr1[i][j]);
		}
	}
	printf("Enter the values of array 2 \n");
	for (int i = 0; i < limit; i++) {
		for (int j = 0; j < limit; j++) {

			scanf("%d", &arr2[i][j]);
		}
	}
}

void addArray(int limit, int arr1[][50], int arr2[][50], int sum[][50]) {
    for (int i = 0; i < limit; i++) {
        for (int j = 0; j < limit; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

void displayArray(int limit, int arr[][50]) {
    for (int i = 0; i < limit; i++) {
        for (int j = 0; j < limit; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}
