#include <stdio.h>

int fac(int);

int main(void) {
    printf("%d\n", fac(10));
}

int fac(int a) {
    if(a < 0) {
        return (-1);
    }
    else if(a == 1) {
        return (1);
    }
    return (a * fac(a - 1));
}