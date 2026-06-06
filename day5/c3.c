#include <stdio.h>

int main(void) {
    int a;
    int *b;
    a = 42;
    b = &a;
    printf("a 값 : %d\n", a);
    printf("a 주소 : %p\n", &a);
    printf("b 값 : %p\n", b);
    printf("*b 값 : %d\n", *b);
    *b = 100;
    printf("*b로 수정후 a : %d\n", a);
}