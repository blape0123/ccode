#include <stdio.h>

int dm(int a, int b, int *c, int *d) {
    *c = a / b;
    *d = a % b;
}

int mm(int a, int b, int *c, int *d) {
    if (a < b) {
        *c = b;
        *d = a;
    }
    else {
        *c = a;
        *d = b;
    }
}

int main(void) {
    int q;
    int r;
    int max;
    int min;

    dm(17, 5, &q, &r);
    printf("17 / 5 → 몫 = %d, 나머지 = %d\n", q, r);
    mm(8, 3, &max, &min);
    printf("min = %d, max = %d\n", min, max);
}