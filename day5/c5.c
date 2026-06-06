#include <stdio.h>

void pv(const int *p) {
    printf("%d\n", *p);
    //*p = 100;
}

int main(void) {
    int n = 7;
    printf("값 읽기 : ");
    pv(&n);
}