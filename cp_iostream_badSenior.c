#include <stdio.h>

// exercise 1.6


int main() {
	char c;
	while ( c = getchar() != EOF) {
		printf("ok.. c = %i\n", c);
	}
	
	return c;
}
