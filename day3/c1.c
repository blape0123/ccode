#include <stdio.h>

int main(void)
{
    int score = 85;

    if (score >= 90) {
        printf("A\n");
    }
    else if (score >= 80) {
        printf("B\n");
    }
    else if (score >= 70) {
        printf("C\n");
    }
    else  {
        printf("F\n");
    }
}