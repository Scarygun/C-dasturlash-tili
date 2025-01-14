#include <stdio.h>

int main() {
    int a, b, c;

    printf("a sonni kiriting: ");
    scanf("%d", &a);
    printf("b sonni kiriting: ");
    scanf("%d", &b);
    printf("c sonni kiriting: ");
    scanf("%d", &c);

    if (a == b && a != c) {
        printf("%d\n", c);
    } else if (a == c && a != b) {
        printf("%d\n", b);
    } else if (b == c && b != a) {
        printf("%d\n", a);
    } else {
        printf("0\n");
    }

    return 0;
}
