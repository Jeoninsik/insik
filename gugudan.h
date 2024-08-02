#pragma once
#include <stdio.h>

// 구구단 출력(0을 입력시 탈출)
void gugudan()
{
	int dan=0; //계산할 단
	int i; //단수와 곱해질 수
	while (1) {
		printf("몇 단 ? ");
		scanf_s("%d", &dan);
		/*for문을 사용하여 프로그래밍 하기*/
		if (dan == 0) break;
		
		for (i = 1; i <= 9; i++) {
			printf("%d*%d=%d\n", dan, i, dan * i);
		}
	}
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("0단은 0이야 바보멍청이 유재훈 !!\n");
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
}