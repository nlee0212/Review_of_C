#include <stdio.h>

int main(void) {
	/*
	int a = 10;
	int b[10];

	b = &a;
	*/

	int a[5] = { 1,2,3,4,5 };
	int *b = a;//int *b = &a[0];�̶� �ص� ����� ����. �迭�� �̸��� �迭�� ù��° ������ �ּҰ��� ���� ����!
	int i;

	//printf("%d", b[2]);

	for (i = 0; i < 5; i++) {
		printf("%d ", a + i);//�ڷ����� int�� ũ�⸸ŭ �ּҰ��� ������ ������.
	}
	printf("\n");
	for (i = 0; i < 5; i++) {
		printf("%d ", *(a + i));//�ּҰ� ����Ű�� ���� ���
	}

	return 0;
}