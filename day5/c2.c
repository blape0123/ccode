#include <stdio.h>

int swap(int *a, int *b) {
    int i = *a;
    *a = *b;
    *b = i;
}

int main(void) {
    int a = 5;
    int b = 999;
    swap(&a, &b);
    printf("%d %d\n", a, b);
}