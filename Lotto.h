#pragma once
#include <stdio.h>

//1~45 �������� 6�ڸ� �� ���
void Lotto()
{
	int temp = 0;
	int num[6] = { 0 };
	printf("�̹��� ����� �ζ� ���ڴ�~");
	for (int i = 0; i <= 5; i++) {
		num[i] = rand()% 46;
		printf("%d ", num[i]);
	}
}