#include <stdio.h>

int main(void) {
	char a[100];

	gets(a);

	printf("%s\n", a);

	char b[100];
	gets_s(b, sizeof(b));
	printf("%s", b);

	return 0;
}