#include <stdio.h>

// count the number of digits, white space and other chars
int main() {
	char c;
	int nwhite, nother;
	int ndigits[10];
	nwhite = nother = 0;
	// ndigits to zeros
	for (int i = 0; i < 10; i++) {
		ndigits[i] = 0;
	}

	while ( (c = getchar()) != EOF) {
		if (c >= '0' && c <= '9') {
			ndigits[c - '0']++;
		} else if (c == ' ' || c == '\n' || c == '\t') {
			++nwhite;
		} else {
			++nother;
		}
	}

	for (int i = 0; i < 10; i++) {
		printf("%d - %i\n", i, ndigits[i]);
	}
	printf("white space %i", nwhite);
	printf("\nother %i\n", nother);

	return 0;

}
