#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("안녕 나는 %s(이)야\n", argv[1]);
    char i = '4';
    int n = (int)(i) - 48;
    printf("%d\n", n);
    return 0;
}