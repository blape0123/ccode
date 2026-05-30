#include <stdio.h>

int main(void) {
    int num;
    int b = 1;
    scanf("%d", &num);
    for (int i = 1; i <= num * 2 - 1; i++) {
        if (i == 1 || i == num * 2 - 1) {
            for (int a = 1; a <= num * 2 - 1; a++) {
                printf("*");
            }
        }
        else if (i == num){
            printf("*");
            for (int a = 1; a <= num - 2; a++) {
                printf(" ");
            }
            printf("*");
            for (int a = 1; a <= num - 2; a++) {
                printf(" ");
            }
            printf("*");
            b--;
        }
        else {
            printf("*");
            for (int a = 1; a < b; a++) {
                printf(" ");
            }
            printf("*");
            for (int a = 1; a <= num * 2 - 3 - b * 2; a++) {
                printf(" ");
            }
            printf("*");
            for (int a = 1; a < b; a++) {
                printf(" ");
            }
            printf("*");
            if (i < num){
                b++;
            }
            else {
                b--;
            }
        }
        printf("\n");
    }
}