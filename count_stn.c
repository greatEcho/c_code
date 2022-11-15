#include <stdio.h>

// Count spaces, \t and \n
int main(int argc, char* argv) {
	int c, ns, nt, nl;
	ns = 0; nt = 0; nl = 0;

	for ( c = 0; (c = getchar()) != EOF;) {
	if (c == ' ') { ++ns; }
	if (c == '\t') { ++nt; }
	if (c == '\n') { ++nl; }	
	}

	printf("spaces = %i\n\\t = %i\n\\n = %i\n", ns, nt, nl);

	return 0;
}
