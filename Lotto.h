#pragma once
#include <stdio.h>

//1~45 무작위로 6자리 수 출력
void Lotto()
{
	int temp = 0;
	int num[6] = { 0 };
	printf("이번주 행운의 로또 숫자는~");
	for (int i = 0; i <= 5; i++) {
		num[i] = rand()% 46;
		printf("%d ", num[i]);
	}
}