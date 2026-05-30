#include <stdio.h>

int main(void) {
    for (int i = 2; i <= 9; i++) {
        printf("%d단\n", i);
        for (int a = 1; a <= 9; a++) {
            printf("%d x %d = %d\n", i, a, a * i);
        }
        printf("\n");
    }
}