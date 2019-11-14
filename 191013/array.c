#include <stdio.h>

int main(void) {
	int a[3][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
	int b[2][3][3] = { {{1,2,3}, {4,5,6}, {7,8,9}} ,{{1,2,3}, {4,5,6}, {7,8,9}} };
	int i, j, k;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	printf("\narray b: \n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			for (k = 0; k < 3; k++) {
				printf("%d ", b[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}