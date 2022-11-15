#include <stdio.h>

// From F to C Temperature Table
int main() {
	float fahr, celcius;
	int lowest, step, highest;
	lowest = 0;
	highest = 300;
	step = 20;

	printf("C to F Table\n_______________\n");
	celcius = lowest;
	while (celcius <= highest) {
	//	celcius = 5.0 * (fahr - 32.0) / 9.0;
		fahr = 9.0 * celcius / 5.0 + 32.0;
		printf("%5.1f %5.1f\n", celcius, fahr);
		celcius += step;
	}

	return 0;
}

			
