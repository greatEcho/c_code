#include <stdio.h>

void inc(int* px) {
	*px = *px + 1;
}

int main() {
	int a = 20;
	printf("%i\n", a);
	inc(&a);
	printf("%i\n", a);
	inc(&a);
	printf("%i\n", a);
	inc(&a);
	printf("%d\n", a);

	return 0;
}

