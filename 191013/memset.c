#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char*a = malloc(sizeof(char) * 10);
	memset(a, 'A', 10);
	for (int i = 0; i < 10; i++)
		printf("%c", a[i]);

	return 0;
}