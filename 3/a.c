#include <stdlib.h>

int main() {
    int *p = malloc(sizeof(int) * 10);
    p[0] = 100;
    p[1] = 200;
    p[2] = 300;
    p[3] = 400;
    for (int i)
    free(p);
    return 0;
}