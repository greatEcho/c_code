#include <stdio.h>

// Power function x^y or x**y

int power(int m, int n); // function declaration 

int main(int argc, char* argv)
{
	for (int i = 0; i < 10; i++) {
		printf("%i**%i %5d\t", 2, i, power(2, i)); 
		printf("%i**%i %10d\n", -4, i, power(-4, i)); 
	}
	return 0;
}

/* power: raise base to n-th power; n >= 0 */
int power(int base, int n) // function definition
{
	int powered = 1;
	for (int i = 1; i <= n; i++) {
		powered = powered * base;
	}
	return powered;
}
// more compact variant
/*
int power(int base, int n)
{
	int powered = 1;
	for (; n > 0; --n) {
		powered = powered * base;
	}
	return powered;
}
*/
