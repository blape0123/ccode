#include <stdio.h>

int main(void) {
    int a = 65;
    int *b = &a;
    printf("%d\n", *b);
    *b = 100;
    printf("%d\n", a);
}