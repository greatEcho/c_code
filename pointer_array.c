#include <stdio.h>

int main() {
	int array[100];

	int* p = array + 40; // 40th element address
	int* q = &array[60]; // 60th element address
	
	if (p <= q) {
		int s = q-p;
		printf("%d\n", s);
	}
}

