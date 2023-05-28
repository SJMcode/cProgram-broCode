/*
 ============================================================================
 Name        : arrayInsertionRandomPosition.c
 Author      : safir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

int array[100], i,n,value, position;
setbuf(stdout, NULL);
printf("Enter number of elements in array: \n");
scanf("%d", &n);
printf("Array elements: ");
for(i=0; i<n; i++){
    scanf("%d", &array[i]);
}
printf("Enter the position to which you want to push the value: ");
scanf("%d", &position);
printf("Enter the value:");
scanf("%d",&value);


for(i=n-1; i>=(position-1); i--){

	array[i+1] =array[i];
}
array[position-1] = value;
for(i=0; i<=n; i++){

	printf("%d ", array[i]);

}




    return 0;
}


