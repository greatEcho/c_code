#include <stdio.h>

// From F to C Temperature Table
int main() {
	float fahr, celcius;
	int lowest, step, highest;
	lowest = 0;
	highest = 300;
	step = 20;

	printf("F to C Table\n_______________\n");
	fahr = lowest;
	while (fahr <= highest) {
		celcius = 5.0 * (fahr - 32) / 9.0;
		printf("%3.0f %3.1f\n", fahr, celcius);
		fahr += step;
	}

	return 0;
}

			
