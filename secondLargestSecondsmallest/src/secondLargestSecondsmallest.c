///*
// ============================================================================
// Name        : secondLargestSecondsmallest.c
// Author      : safir
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
// ============================================================================
// */
//
//#include <stdio.h>
//#include <limits.h>
//
//int main(void) {
//	int a[100];
//	int i, n;
//	int small = INT_MAX, second_small = INT_MAX;
//	int large = INT_MIN, second_large = INT_MIN;
//	setbuf(stdout, NULL);
//
//	//n = sizeof(a) / sizeof(a[0]);
//	printf("Enter size of array: \n");
//	scanf("%d", &n);
//	printf("Enter array elements: ");
//	for (i = 0; i < n; i++) {
//		scanf("%d", &a[i]);
//	}
//
//	for (i = 0; i < n; i++) {
//
////		for (j = i + 1; j < n; j++) {
////
////			if (a[i] > a[j]) {
////
////				temp = a[i];
////				a[i] = a[j];
////				a[j] = temp;
////			}
//		small = min(small, a[i]);
//		large = max(large, a[i]);
//
//
//
//	if (a[i] < second_small && a[i] != small)
//		second_small = a[i];
//	if (a[i] > second_large && a[i] != large)
//		second_large = a[i];
//
//	}
//printf("Second Smallest : %d\n",second_small);
//
//printf("Second largest :  %d", second_large);
//
//return EXIT_SUCCESS;
//}
