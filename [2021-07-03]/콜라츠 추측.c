#include <stdio.h>
//#include <stdbool.h> bool�� ������� �����Ƿ� ������
#include <stdlib.h>

int solution(int n) {
    int count = 0;
    while(n != 1){
        if(n % 2 == 0){
            n /= 2;
        }
        else if(n % 2 == 1){
            n = n * 3 + 1;
        }
        count ++;
        if(count == 500){
            count = -1;
            break;
        }
    }
    return count;
}
