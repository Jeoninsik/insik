#pragma once
#include <stdio.h>

void gugudan()
{
	int dan; //����� ��
	int i; //�ܼ��� ������ ��
	printf(" �� �� ? ");
	scanf_s("%d", &dan);
	/*for���� ����Ͽ� ���α׷��� �ϱ�*/

	for (i = 1; i <= 9; i++) {
		printf("%d*%d=%d\n", dan, i, dan * i);
	}
}