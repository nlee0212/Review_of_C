#include <stdio.h>

void process() {
	static int a = 5;//이 문장은 처음에만 a를 선언하는데에 쓰이고, 두번째 이후부터 process함수가 불려올 땐 무시됨. 기존의 a값 가지고 이후 과정 진행.
	a++;
	printf("%d\n", a);
}

int main(void) {
	process();//6
	process();//7
	process();//8

	return 0;
}