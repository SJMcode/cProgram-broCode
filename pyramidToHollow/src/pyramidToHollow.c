#include <stdio.h>


int main(void){

	int i,j,s,n;
	setbuf(stdout, NULL);

	printf("Enter number of rows: \n");
	scanf("%d", &n);

	for(i=1; i<=n; i++){

		for(s=1; s<=(n-i-1); s++){

			printf(" ");
		}

		for(j=1; j<=(2*i+1); j++){

			printf("*");
		}

	}

	return 0;
}