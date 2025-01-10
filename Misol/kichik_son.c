#include <stdio.h>

int main() {
    int a, b;

    printf("a sonini kiriting: ");
    scanf("%d", &a);
    printf("b sonini kiriting: ");
    scanf("%d", &b);

    if (a < b) {
        printf("Natija: %d\n", a);
    } else if (b < a) {
        printf("Natija: %d\n", b);
    } else {
        printf("Natija: teng\n");
    }

    return 0;
}
