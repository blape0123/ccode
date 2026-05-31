#include <stdio.h>

int	power_rec(int base, int exp);

int	main(void)
{
	int	b;
	int	e;

	printf("%-30s %10s\n", "식", "재귀");
	printf("------------------------------------------------------\n");
	b = 2; e = 0;
	printf("power(%d, %2d)          %10d\n", b, e, power_rec(b, e));
	b = 2; e = 1;
	printf("power(%d, %2d)          %10d\n", b, e, power_rec(b, e));
	b = 2; e = 10;
	printf("power(%d, %2d)          %10d\n", b, e, power_rec(b, e));
	b = 3; e = 4;
	printf("power(%d, %2d)          %10d\n", b, e, power_rec(b, e));
	b = 5; e = 5;
	printf("power(%d, %2d)          %10d\n", b, e, power_rec(b, e));
	return (0);
}

int	power_rec(int base, int exp)
{
    if(exp == 0) {
        return 1;
    }
    return base * power_rec(base, exp - 1);
}
