#pragma once
#include <stdio.h>

// ������ ���(0�� �Է½� Ż��)
void gugudan()
{
	int dan=0; //����� ��
	int i; //�ܼ��� ������ ��
	while (1) {
		printf("�� �� ? ");
		scanf_s("%d", &dan);
		/*for���� ����Ͽ� ���α׷��� �ϱ�*/
		if (dan == 0) break;
		
		for (i = 1; i <= 9; i++) {
			printf("%d*%d=%d\n", dan, i, dan * i);
		}
	}
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("0���� 0�̾� �ٺ���û�� ������ !!\n");
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
}