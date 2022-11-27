#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
int solution(const char* s) {
    int answer = 0, n_len = 0;
    int s_len = strlen(s);
    char eng[10][6] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    int* number = (int*)malloc(sizeof(int) * s_len);

    for (int i = 0; i < s_len; i++) {
        if (isdigit(s[i])) {
            number[n_len] = s[i] - 48;
        }
        else {
            for (int j = 0; j < 10; j++) {
                if (memcmp(&s[i], &eng[j], strlen(eng[j])) == 0) {
                    number[n_len] = j;
                    i += strlen(eng[j]) - 1;
                    break;
                }
            }
        }
        n_len++;
    }

    for (int i = 0; i < n_len; i++) {
        answer += number[i] * pow(10, n_len - i - 1);
    }

    return answer;
}

// "one4seveneight" = 1478
// "23four5six7" = 234567
// "123" = 123
// ��ó��, ���� �� �Ϻθ� ����� ǥ���� ���ڿ��� ���ڷ� ��ȯ���ִ� �Լ�