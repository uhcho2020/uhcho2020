#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int n) {
    // ������ ���� �޸𸮸� ���� �Ҵ����ּ���.
    char* su = "��";
    char* bak = "��";
    char* answer = (char*)malloc(sizeof(char) * 3 * n);
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            strcpy(answer + i * 3, su);
        else
            strcpy(answer + i * 3, bak);
    }
    return answer;
}

// 3 = "���ڼ�"
// 4 = "���ڼ���"
// Ȧ���� ���� ��, ¦���� ���� ���� print�ϴ� �Լ�