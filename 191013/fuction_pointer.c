#include <stdio.h>

void myFunction() {
	printf("A\n");
}

void yourFunction() {
	printf("B\n");
}

int main(void) {
	void(*fp)() = myFunction;//��ȯ�ڷ���(*�̸�)(�Ű�����)=�Լ���;-> fp�� myFunction�� �ּҰ��� �� ��.
	fp();
	fp = yourFunction;//fp�� yourFunction�� �ּҰ��� �� ��.
	fp();

	return 0;
}