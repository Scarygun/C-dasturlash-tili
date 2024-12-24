#include <stdio.h>

int main() {
    int a;

    printf("a ni kiriting: ");
    scanf("%d", &a);

    if (a > 0) {
        printf("musbat\n");
    } else if (a < 0) {
        printf("manfiy\n");
    } else {
        printf("0\n");
    }

    return 0;
}
