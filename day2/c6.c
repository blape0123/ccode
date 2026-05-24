#include <stdio.h>

int main(void)
{
    int i;
    double d;
    char c;
    int n;
    i = 10;
    d = i;
    printf("%.1f\n", d);
    printf("%f\n", (double)i + 1.5);
    c = 'A';
    n = c;
    printf("%d\n", n);
    d = 3.7;
    i = (int)d;
    printf("%d\n", i);
    d = 9.99;
    i = (int)d;
    printf("%d\n", i);
    i = 10;
    d = 3;
    printf("%f\n", (double)i / d);
    printf("%f\n", (double)i / d);
    n = 65;
    c = (char)n;
    printf("%c\n", c);
    n = 97;
    c = (char)n;
    printf("%c\n", c);
    c = 'Z';
    n = (int)c;
    printf("%d\n", n);
    printf("%d\n", 'A' + 1);
    printf("%f\n", 5 / 2.0);
    printf("%d\n", 5 / 2);
    return (0);
}