#include <stdio.h>

int sum(int, int);
void add(int*);

int main(void) {
    int a = 5;
    add(&a);
    printf("%d\n", a);
    printf("%d\n", sum(34,246));
    return 0;
}

int sum(int a, int b) {
    return (a + b);
}

void add(int* a) {
    *a = *a + 1;
}