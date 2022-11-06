#include <stdio.h>

// welcome a stranger!
int main(int argc, char* argv[]) {
	if (argc == 2) {
		printf("Hello, %s!\n", argv[1]);
	} else {
		char name[10];
		printf("Enter your name: ");
		scanf("%s", name);
		printf("Hello, %s!\n", name);
	}

	return 0;
}


