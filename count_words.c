#include <stdio.h>

// count words, line,  symbols in input stream (like wc in Unix)
#define IN 1 /* in a word */
#define OUT 0 /* outside a word */

int main() {
	int c, nl, nw, nc, state;
	state = OUT;
	nl = nw = nc = 0;

	while ( (c = getchar()) != EOF) {
		nc++;
		if (c == '\n') { ++nl; }
		if (c == '\n' || c == ' ' || c == '\t') { state = OUT; }
		else if (state == OUT) {
			nw++;
			state = IN;
		}
	}
	printf("symbols = %d\nlines = %d\nwords = %d\n", nc, nl, nw);

	return 0;
}
						
