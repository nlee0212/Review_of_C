#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int**p = (int**)malloc(sizeof(int*) * 3);//2���� �迭 �� �� 3�� ���� ����
	int i,j;

	for (i = 0; i < 3; i++) {
		*(p + i) = (int*)malloc(sizeof(int) * 3);//�� �࿡ �� 3�� ����, p�� ���� 2���� �������̱� ������ *(p)�� �� �ܰ� ���� ������ �迭�� ����� �� �� ����.
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			*(*(p+i)+j) = i * 3 + j;//012345678�� ����� ����.
			printf("%d ", *(*(p+i)+j));
		}
		printf("\n");
	}
	
	for (i = 0; i < 3; i++)
		free(p[i]);
	free(p);
	//���� �� ���� 1���� �迭���� �޸� ���������ְ�, �� ���� '��'�迭 �޸� ��ü�� �����ؾ���.

	return 0;
}