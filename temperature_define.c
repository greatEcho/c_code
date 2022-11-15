#include <stdio.h>

// final F to C Table with #define
#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
	float fahr, celcius;
	for (fahr = LOWER; fahr <= UPPER; fahr += STEP) {
		printf("%3.0f %4.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
	}

	return 0;
}
