#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    // ������ ���� �޸𸮸� ���� �Ҵ����ּ���.
    int* answer = (int*)malloc(sizeof(n) * 11);
    int count = 0;
    while (n != 0) {
        int a = n % 10;
        answer[count] = a;
        n = n / 10;
        count++;
    };
    return answer;
}