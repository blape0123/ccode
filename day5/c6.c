#include <stdio.h>

int main(void) {
    int n = 42;
    int *p = &n;
    int **pp = &p;

    printf("n = %d\n", n);
    printf("*p = %d\n", *p);
    printf("**pp = %d\n", **pp);
    printf("-------------\n");
    printf("&n = %p\n", &n);
    printf("p = %p\n", p);
    printf("*pp = %p\n", *pp);
    **pp = 100;
    printf("**pp = 100 실행후 n = %d\n", n);
}