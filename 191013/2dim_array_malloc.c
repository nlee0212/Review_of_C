#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int**p = (int**)malloc(sizeof(int*) * 3);//2차원 배열 중 행 3개 먼저 선언
	int i,j;

	for (i = 0; i < 3; i++) {
		*(p + i) = (int*)malloc(sizeof(int) * 3);//각 행에 열 3개 배정, p는 원래 2차원 포인터이기 때문에 *(p)로 한 단계 위로 일차원 배열로 만들어 준 뒤 배정.
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			*(*(p+i)+j) = i * 3 + j;//012345678로 만들기 위해.
			printf("%d ", *(*(p+i)+j));
		}
		printf("\n");
	}
	
	for (i = 0; i < 3; i++)
		free(p[i]);
	free(p);
	//먼저 각 행의 1차원 배열들을 메모리 해제시켜주고, 그 다음 '행'배열 메모리 자체를 해제해야함.

	return 0;
}