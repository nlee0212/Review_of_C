#include <stdio.h>

void process() {
	static int a = 5;//�� ������ ó������ a�� �����ϴµ��� ���̰�, �ι�° ���ĺ��� process�Լ��� �ҷ��� �� ���õ�. ������ a�� ������ ���� ���� ����.
	a++;
	printf("%d\n", a);
}

int main(void) {
	process();//6
	process();//7
	process();//8

	return 0;
}