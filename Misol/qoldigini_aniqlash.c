#include <stdio.h>

int main() {
    int a, qoldiq;

    printf("Sonni kiriting: ");
    scanf("%d", &a);

    qoldiq = a % 3;

    printf("Natija: %d\n", qoldiq);

    return 0;
}
