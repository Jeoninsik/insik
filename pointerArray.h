#pragma once
#include <stdio.h>
//�����ͺ��� ����ؼ� �迭�� ����

void pointerArray() {
	int aa[4] = { 100, 200, 300, 400 };
	int* ptr;
	for (int i = 0; i < 4; i++)
	{
		printf("aa[%d] ���� %d\n", i, aa[i]);
	}
	ptr = aa;
	*ptr = 500;
	*(ptr + 3) = 600;

	for (int i = 0; i < 4; i++)
	{
		printf("�����aa[%d] ���� %d\n", i, aa[i]);
	}
}