#include <stdio.h>

// Copy input stream to output

int main(int argc, char* argv) {
	char c;
	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}

	return 0;
}
