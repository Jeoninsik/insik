#pragma once
#include <stdio.h>
//각 배열의 원소 합

void sumArray() {
	int temp = 0;
	int num[5] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++) {
		temp += num[i];
	}
	printf("%d", temp);
}