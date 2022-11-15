#include <stdio.h>

// Copy input stream to output in senior way
int main() {
	char c;
	while ( (c = getchar()) != EOF) {
		putchar(c);
	}

	return 0;
}
