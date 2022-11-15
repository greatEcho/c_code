#include <stdio.h>

// Reverse F to C table
int main() {
	float fahr, celcius;
	int lowest, highest, step;

	printf("F to C reverse table\n_________\n");
	for (fahr = 300; fahr >= 0; fahr-= 20) {
		// printf("%3f\n", fahr);
		celcius = 5.0 * (fahr - 32) / 9.0;
		printf("%3.0f %4.1f\n", fahr, celcius);
	}

	return 0;
}
