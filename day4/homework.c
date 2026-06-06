#include <stdio.h>

int power(int b) {
    if(b == 0) {
        return 1;
    }
    return 2 * power(b - 1);
}

int count = 0;

void printBinary(int n)
{
    while (power(count) <= n) {
        count++;
    }

    count--;

    if (n <= 0) {
        count = 0;
        return;
    }
    else if(n >= power(count)) {
        printf("1");
        count--;
        printBinary(n - power(count));
    }
    else {
        printf("0");
        count--;
        printBinary(n - power(count));
    }
}

int main()
{
    int n;
    printf("n을 입력하시오: ");
    scanf("%d", &n);
    printBinary(n);
    return 0;
}