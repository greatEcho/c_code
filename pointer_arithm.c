#include <stdio.h>

int main() {
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int* p = &10;
	printf("%i\n", *p);
	printf("%i\n", p);
	p = p + 3;
	printf("%i\n", p);
	p = p - 2;
	printf("%i\n", p);
	printf("%i\n", *p);

	return 0;
}
