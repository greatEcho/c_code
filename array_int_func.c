#include <stdio.h>

void print_int(int* arg) { printf("%d\n", arg); }

int f(int* arr, int size) {
	for (int i = 0; i < size; i = i+1) {
		print_int(&arr[i]);
	}
}


int main() {
	int myarray[] = {1,2,3,4,5};
	int myarray_size = 5;
	
	f( myarray, myarray_size);

	
	return 0;
}
