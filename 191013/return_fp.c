#include <stdio.h>

int add(int a, int b) {
	return a + b;
}

int(*process(char* a))(int, int) {
	printf("%s\n", a);
	return add;
}

int main(void) {
	printf("%d\n", process("10�� 20�� ���غ��ڽ��ϴ�.")(10, 20));

	return 0;
}