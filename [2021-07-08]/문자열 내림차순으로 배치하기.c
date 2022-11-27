#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* s) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    int len = strlen(s);
    char* answer = (char*)malloc(sizeof(char) * len);
    strcpy(answer, s);
    for (int i = 0; i < len; i++) {
        int j = i + 1;
        while (j < len) {
            if (answer[i] < answer[j]) {
                int a = answer[i];
                answer[i] = answer[j];
                answer[j] = a;
            }
            j++;
        }
    }
    return answer;
}

// "Zbcdefg" = "gfedcbZ"
// ���ڸ� ū �ͺ��� ���� �� ������ �����Ѵ�.
// �빮�ڴ� �ҹ��ں��� ���� ������ ���ֵȴ�. >> ASCII�ڵ��� ���� ������