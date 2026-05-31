#include <stdio.h>

int	digit_sum(int n);

int	main(void)
{
	printf("digit_sum(0)    = %d\n", digit_sum(0));
	printf("digit_sum(5)    = %d\n", digit_sum(5));
	printf("digit_sum(123)  = %d\n", digit_sum(123));
	printf("digit_sum(9999) = %d\n", digit_sum(9999));
	printf("digit_sum(10)   = %d\n", digit_sum(10));
	printf("digit_sum(100)  = %d\n", digit_sum(100));
	return (0);
}

int	digit_sum(int n)
{
    if(n < 10) {
        return n;
    }
    return n % 10 + digit_sum((int)(n / 10));
}