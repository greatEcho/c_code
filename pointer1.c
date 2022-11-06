#include <stdio.h>

void print_int(int a) {
	printf("%i", a);
}

int main() {
	int x = 10;
	int* px = &x;

	print_int( *px );

	*px = 42;

	print_int( *px );
	print_int( x );

	return 0;
}
