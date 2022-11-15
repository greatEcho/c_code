#include <stdio.h>

// cp input stream to output stream until End Of Line

int main(int argc, char* argv) {
	char c;
	while ( (c = getchar()) != '\n' ) {
		putchar(c);
	}

	return 0;
}
