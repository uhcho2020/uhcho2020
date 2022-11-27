#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
bool solution(const char* s) {
    bool answer = true;
    int len = strlen(s);
    if (len != 4 && len != 6)
        answer = false;
    for (int i = 0; i < len; i++) {
        if (!isdigit(s[i])) {
            answer = false;
            break;
        }
    }
    return answer;
}

// "a123" = false
// "1234" = true
// "12345" = false
// "123456" = true
// �迭�� ���̰� 4 �Ǵ� 6�� �ƴϸ� false�� return
// �迭�� ���� �̿��� �ٸ� ���� ���� false�� return