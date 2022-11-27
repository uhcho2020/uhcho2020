#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* s) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    int len = strlen(s);
    char* answer;
    if (len % 2 == 0) {
        answer = (char*)malloc(sizeof(char) * 2);
        answer[0] = s[len / 2 - 1];
        answer[1] = s[len / 2];
        answer[2] = NULL;
    }
    else {
        answer = (char*)malloc(sizeof(char));
        answer[0] = s[len / 2];
        answer[1] = NULL;
    }
    return answer;
}

// "abcde" = "c"
// "qwer" = "we" �ܾ� ����� ���ڸ� ��ȯ�ϴ� �Լ�
// ���ڰ� ¦����� ��� 2���� ��ȯ�մϴ�.