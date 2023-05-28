#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i,j,k,n;
	setbuf(stdout, NULL);
	printf("Enter number of rows: \n");
	scanf("%d", &n);

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=3;j++)
		{
		printf("*\n");


		}

		for(k=1;k<=i;k++)
		{
		printf("* * *\n");
		}
	}


		return EXIT_SUCCESS;
	}

