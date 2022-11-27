#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int Prime(int num) {
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

// nums_len�� �迭 nums�� �����Դϴ�.
int solution(int nums[], size_t nums_len) {
    int answer = 0;
    int num;

    for (int i = 0; i < nums_len - 2; i++) {
        for (int j = i + 1; j < nums_len - 1; j++) {
            for (int k = j + 1; k < nums_len; k++) {
                num = nums[i] + nums[j] + nums[k];
                if (Prime(num))
                    answer++;
            }
        }
    }
    return answer;
}

// [1,2,3,4] = 1
// [1,2,7,6,4] = 4
// �迭���� 3���� ���ڸ� select�ϰ� ���� ���� �Ҽ��� ���� count�Ѵ�.