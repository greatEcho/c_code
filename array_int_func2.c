#include <stdio.h>

void print_int(int arg) { printf("%i\n", arg); }

int f(int* arr, int* limit) {
	for (int* current = arr; current < limit; current++ ) {
		printf("%i\t", &(limit - current));
		print_int( * current );
	}
}



int main() {
	int myarray[] = {1,2,3,4,5};

	f( myarray, myarray + 5);


	return 0;


}
