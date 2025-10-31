#include <stdio.h>

int main() {
    int a=1;
    int b=2;
    int c=3;

    if (a >= b && a >= c)
        printf("%d", a);

    if (b >= a && b >= c)
        printf("%d", b);

    if (c >= a && c >= b)
        printf("%d", c);

    return 0;
}

