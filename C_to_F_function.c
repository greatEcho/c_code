#include <stdio.h>

// C to F function
float convert_T(float fahr);

int main() 
{
	float fahr;
	int lowest, highest, step;
	lowest = 0;
	highest = 300;
	step = 20;

	for (fahr = lowest; fahr <= highest; fahr += step) {
		printf("%3.0f %5.2f\n", fahr, convert_T(fahr));
	}

	return 0;
}

float convert_T(float fahr)
{
	float celcius;
	celcius = 5.0 * (fahr - 32.0) / 9.0;
	return celcius;
}	


