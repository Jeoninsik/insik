#pragma once
#include <stdio.h>

// 2���� �迭�� ������ ��� ����
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