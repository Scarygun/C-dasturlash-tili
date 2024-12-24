#include <stdio.h>

int main() {
    int a, b;

    printf("a ni kiriting: ");
    scanf("%d", &a);

    printf("b ni kiriting: ");
    scanf("%d", &b);

    if (a > b) {
        printf("katta son %d\n", a);
    } else if (b > a) {
        printf("katta son %d\n", b);
    } else {
        printf("Voy ular teng\n");
    }

    return 0;
}
