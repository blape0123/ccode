#include <stdio.h>

int main(void)
{
    int a = 5;

    a++;
    printf("%d\n", a);
    a--;
    printf("%d\n", a);

    a += 2;
    printf("%d\n", a);
    a -= 2;
    printf("%d\n", a);
    a *= 2;
    printf("%d\n", a);
    a /= 2;
    printf("%d\n", a);
    a %= 2;
    printf("%d\n", a);
    return (0);
}