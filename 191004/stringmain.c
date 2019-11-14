#include <stdio.h>

int main(void) {
	char a[20];
	char b[20] = "Hello World!";
	/*
	scanf("%s", &a);
	printf("%s", a);
	*/
	b[4] = ',';
	printf("%s", b);

	return 0;
}