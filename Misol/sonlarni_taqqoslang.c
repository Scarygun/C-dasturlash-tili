#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("a sonni kiriting: ");
    scanf("%d", &a);
    printf("b sonni kiriting: ");
    scanf("%d", &b);
    printf("c sonni kiriting: ");
    scanf("%d", &c);

    if (a < b && b < c) {
        printf("1\n");
    } else if (a > b && b > c) {
        printf("2\n");
    } else if (b > a && b > c) {
        printf("%d\n", b);
    } else if (a == b && b == c) {
        printf("5\n");
    } else {
        printf("0\n");
    }

    return 0;
}
