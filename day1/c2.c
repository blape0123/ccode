#include <stdio.h>

int main(void)
{
    int result = 42;            /* unused variable */
    int x = 10;                      /* uninitialized   */
    printf("계산 결과: %d, %d\n", x, result);

    return (0);
}