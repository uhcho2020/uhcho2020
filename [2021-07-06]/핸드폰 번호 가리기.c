#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* phone_number) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    int len = strlen(phone_number);
    char* answer = (char*)malloc(sizeof(char) * len);
    for (int i = 0; i < len; i++) {
        if (i < len - 4)
            answer[i] = '*';
        else
            answer[i] = phone_number[i];
        answer[len] = NULL;
    }
    return answer;
}

// "01033334444" = "*******4444"
// "027778888" = "*****8888"
// ó�� �� 4�ڸ��� ������ ������ ���ڸ� ���� *�� ������.