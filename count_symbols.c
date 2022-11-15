#include <stdio.h>

// count the number of symbols
int main() {
	long nc;
	nc = 0;
	while (getchar() != EOF) {
		++nc;
	}
	
	// for way
	// for (nc = 0; getchar() != EOF; ++nc) {}

	printf("%ld\n", nc);

	return 0;
}
