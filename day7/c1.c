#include <stdio.h>

int main() {
    char arr[6] = "hello";
    int i = 0;
    while(arr[i]) {
        printf("%c", arr[i]);
        i++;
    }
    printf("\n");

    char *ar = "apple";
    i = 0;
    while(*(ar + i)) {
        printf("%c", *(ar + i));
        i++;
    }
    printf("\n");
    char a = 'a';
    int gab = 'a' - 'A';
    printf("%c", a - gab);
    printf("\n");
}