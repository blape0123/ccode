#include <stdio.h>

int	power(int base, int exp);
int	sum_to(int n);

int	main(void)
{
	printf("power(2, 0)  = %d\n", power(2, 0));
	printf("power(2, 1)  = %d\n", power(2, 1));
	printf("power(2, 10) = %d\n", power(2, 10));
	printf("power(3, 4)  = %d\n", power(3, 4));
	printf("sum_to(1)    = %d\n", sum_to(1));
	printf("sum_to(5)    = %d\n", sum_to(5));
	printf("sum_to(10)   = %d\n", sum_to(10));
	printf("sum_to(100)  = %d\n", sum_to(100));
	return (0);
}

int power(int a, int b) {
    if(b == 0) {
        return 1;
    }
    return a * power(a, b - 1);
}

int sum_to(int a) {
    if(a == 1) {
        return 1;
    }
    return a + sum_to(a - 1);
}