#include <stdio.h>

int main() {
    int a, b, c;

    printf("a ni kiriting: ");
    scanf("%d", &a);

    printf("b ni kiriting: ");
    scanf("%d", &b);

    printf("c ni kiriting: ");
    scanf("%d", &c);

    if (a >= b && a >= c) {
        printf("katta son a=%d\n", a);
    } else if (b >= a && b >= c) {
        printf("katta son b=%d\n", b);
    } else {
        printf("katta son c=%d\n", c);
    }

    return 0;
}
