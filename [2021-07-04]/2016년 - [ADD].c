#include <stdio.h>
#include <stdlib.h>

char* solution(int a, int b) {
    // ������ ���� �޸𸮸� ���� �Ҵ����ּ���.
    char* answer = (char*)malloc(sizeof(char) * 3);
    int d = 0;
    int month[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    for (int i = 0; i < a - 1; i++) {
        d += month[i];
    }
    d += b;
    d %= 7;
    char* day[] = { "THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED" };
    answer = day[d];
    return answer;
}

int main() {
    printf("day : %s\n", solution(5, 24));
    return 0;
}
// solution(5, 24) = "TUE"
// solution(1, 1) = "FRI"
//�̷������� ��¥ �Է� �� �� ���� ������ ���