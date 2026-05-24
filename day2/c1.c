#include <stdio.h>

int main(void)
{
    printf("char : %zu 바이트\n", sizeof(char));
    printf("int : %zu 바이트\n", sizeof(int));
    printf("long : %zu 바이트\n", sizeof(long));
    printf("float : %zu 바이트\n", sizeof(float));
    printf("double : %zu 바이트\n", sizeof(double));

    return (0);
}