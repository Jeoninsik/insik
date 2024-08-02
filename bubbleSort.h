#pragma once
#include <stdio.h>
//배열 오름차순 정렬

void bubbleSort() {
	int a[5] = { 4, 2, 3, 0, 1 };
	int temp;
	int i, k;
	printf("정렬 전 배열 a ==> ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("정렬 후 배열 a ==> ");
	for (i = 0; i < 5; i++) {
		for (k = 0; k < (5 - 1) - i; k++) {
			if (a[k] > a[k + 1]) {// 버블 정렬 사용
				temp = a[k];
				a[k] = a[k + 1];
				a[k + 1] = temp;
			}
		}
	}
	for (int j = 0; j < 5; j++)
	{
		printf("%d ", a[j]);
	}
}