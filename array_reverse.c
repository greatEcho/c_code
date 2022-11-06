#include <stdio.h>


void array_reverse_ptr(int* arr, int* limit) {
	for(int* current = arr; (current - arr) < (limit - arr) / 2; current++) {
		int step = current - arr;
		int bucket = *current;
		*current = *(limit - step - 1);
		*(limit - step - 1) = bucket;
//		printf("%i\n", *current);		
//		printf("%i\n", *(limit - (limit - current)));
	}
}

void print_arr(int* arr, int* limit) {
	for(int* current = arr; current < limit; current++) {
		printf("%i\n", *current);
	}
}

int main() {

	int myarr[] = { 10, 20, 30, 40, 50};
	
	array_reverse_ptr(myarr, myarr+5);
	print_arr(myarr, myarr+5);

	return 0;

}
