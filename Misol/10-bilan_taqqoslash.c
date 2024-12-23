#include <stdio.h>

int main() {
    int a;

    printf("Sonni kiriting:");
    scanf("%d", &a);

    if (a > 10) {
        printf("Natija:%d\n", a + 3);
    } else if (a < 10) {
        printf("Natija:%d\n", a * 2);
    } else {
        printf("Natija:22\n");
    }

    return 0;
}
