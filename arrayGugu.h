#pragma once
#include <stdio.h>

// 2차원 배열에 구구단 결과 저장
void arrayGugu() {
	int num[9][9] = { 0 };

	for (int i = 0; i <= 8; i++) {
		for (int j = 0; j <= 8; j++) {
			num[i][j] = (i + 1) * (j + 1);
			printf("%d * %d = %d ", i + 1, j + 1, num[i][j]);
		}
		printf("\n");
	}
}