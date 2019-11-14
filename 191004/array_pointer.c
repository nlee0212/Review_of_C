#include <stdio.h>

int main(void) {
	int a[] = { 1,2,3,4,5 };
	int *b = a;

	printf("%d\n", b[2]);
	printf("%d", *b);//*b는 a의 주소값, 즉 a[0]이 가지는 값을 가르킴.

	return 0;
}