#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int factorial(int num) {
	if (num == 1)
		return 1;
	else
		return num * factorial(num - 1);
}

int main() {
	int n;
	printf("n�� ���丮���� ���մϴ�.\n n: ");
	scanf("%d", &n);
	printf("n! = %d", factorial(n));
}

