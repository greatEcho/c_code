#include <stdio.h>

// copy iostream "new word on new line" 
#define IN 1
#define OUT 0
int main() {
	char c;
	int state = IN;
	while ( (c = getchar()) != EOF ) {
		if (c == '\t' || c ==' ') {
			state = OUT;
		}
		else {
			if (state == OUT) {
				putchar('\n');
				state = IN;
				putchar(c);
			} else {
				putchar(c);
			}
		}
	}

	return 0;
}
