#pragma once
#include <stdio.h>
//포인터변수 사용해서 배열값 변경

void pointerArray() {
	int aa[4] = { 100, 200, 300, 400 };
	int* ptr;
	for (int i = 0; i < 4; i++)
	{
		printf("aa[%d] 값은 %d\n", i, aa[i]);
	}
	ptr = aa;
	*ptr = 500;
	*(ptr + 3) = 600;

	for (int i = 0; i < 4; i++)
	{
		printf("변경된aa[%d] 값은 %d\n", i, aa[i]);
	}
}