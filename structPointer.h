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

	printf("이름 입력 : ");
	scanf_s("%s", p->name,10);

	printf("국어 점수 : ");
	scanf_s("%d", &p->kor);

	printf("영어 점수 : ");
	scanf_s("%d", &p->eng);

	p->avg = (p->kor + p->eng) / 2.0f; //평균구하기

	printf("\n--- 구조체 포인터 활용 ---\n");
	printf("학생 이름 ==> %s\n", p->name);
	printf("국어 점수 ==> %d\n", p->kor);
	printf("영어 점수 ==> %d\n", p->eng);
	printf("평균 점수 ==> %5.1f\n", p->avg);
}