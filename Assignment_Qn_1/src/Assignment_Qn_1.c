#include <stdio.h>
#include <stdlib.h>

int main(void) {

	    char input;
	    setbuf(stdout, NULL);
	    printf("Enter a character: ");
	    scanf("%c", &input);

	    printf("Entered character is: %c\n", input);

	    return 0;
	}
