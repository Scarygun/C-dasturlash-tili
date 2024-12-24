#include <stdio.h>

int main() {
    int a;

    printf("Sonni kiriting: ");
    scanf("%d", &a);

    if (a % 5 == 0) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
