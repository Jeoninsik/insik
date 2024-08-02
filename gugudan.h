#pragma once
#include <stdio.h>

void gugudan()
{
	int dan; //계산할 단
	int i; //단수와 곱해질 수
	printf(" 몇 단 ? ");
	scanf_s("%d", &dan);
	/*for문을 사용하여 프로그래밍 하기*/

	for (i = 1; i <= 9; i++) {
		printf("%d*%d=%d\n", dan, i, dan * i);
	}
}