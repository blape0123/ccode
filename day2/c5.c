#include <stdio.h>

int main(void)
{
    int a = 5;
    int b = 3;
    int c = 2;
    printf("%d\n", a + b > c);
    printf("%d\n", a > b + c);
    printf("%d\n", a - b == c);

    printf("%d\n", 1 || 0 && 0);
    printf("%d\n", (1 || 0) && 0);
    printf("%d\n", !0 + 1);
    printf("%d\n", !(0 + 1));

    a = 3 + 4 * 2;
    printf("%d\n", a);
    a = 10;
    b = a++ + 1;
    printf("%d %d\n", a, b);
    a = 10;
    b = ++a + 1;
    printf("%d %d\n", a, b);
    return (0);
}