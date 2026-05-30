#include <stdio.h>

int main(void) {
    int num;
    
    int b = 1;
    int j = 1;
    int a = 1;
    scanf("%d", &num);
    int range = 2 * num - 1;
    while (j < range + 1){
        a = 0;
        while (a < range){
            if (a - j == num - 2 || -a - j == -num || j - a == num || a + j == num * 3 - 2){
                printf("*");
            }
            else {
                printf(" ");
            }
            a++;
        }
        printf("\n");
        j++;
    }
}