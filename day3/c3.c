#include <stdio.h>

int main(void) {
    int count = 0;
    int num = 34;
    int a;
    while (1){
        scanf("%d", &a);
        count++;
        if (a > num) {
            printf("더 작게!\n");
        }
        else if (a < num) {
            printf("더 크게!\n");
        }
        else {
            printf("정답!\n");
            break;
        }
    }
    printf("시도횟수 : %d\n", count);
}