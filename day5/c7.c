#include <stdio.h>

int main(void) {
    int arr[3] = {10, 20, 30};
    int *p = arr;

    printf("%p\n", p);
    printf("%p\n", p + 1);
    printf("%p\n", p + 2);
}