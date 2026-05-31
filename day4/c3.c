#include <stdio.h>

int	max(int a, int b);
int	min(int a, int b);
int	abs_val(int n);

int	main(void)
{
	printf("max(3, 7)   = %d\n", max(3, 7));
	printf("min(3, 7)   = %d\n", min(3, 7));
	printf("abs_val(-5) = %d\n", abs_val(-5));
	printf("abs_val(5)  = %d\n", abs_val(5));
	printf("abs_val(0)  = %d\n", abs_val(0));
	return (0);
}

int max(int a, int b) {
    if(a > b) {
        return a;
    }
    if(a < b) {
        return b;
    }
    return 0;
}

int min(int a, int b) {
    if(a > b) {
        return b;
    }
    if(a < b) {
        return a;
    }
    return 0;
}

int abs_val(int a) {
    if(a < 0){
        return -a;
    }
    return a;
}