#pragma once

#include <stdio.h>

void structPointer()
{
	struct student {
		char name[10];
		int kor;
		int eng;
		float avg;
	};

	struct student s;
	struct student* p;

	p = &s;

	printf("�̸� �Է� : ");
	scanf_s("%s", p->name,10);

	printf("���� ���� : ");
	scanf_s("%d", &p->kor);

	printf("���� ���� : ");
	scanf_s("%d", &p->eng);

	p->avg = (p->kor + p->eng) / 2.0f; //��ձ��ϱ�

	printf("\n--- ����ü ������ Ȱ�� ---\n");
	printf("�л� �̸� ==> %s\n", p->name);
	printf("���� ���� ==> %d\n", p->kor);
	printf("���� ���� ==> %d\n", p->eng);
	printf("��� ���� ==> %5.1f\n", p->avg);
}