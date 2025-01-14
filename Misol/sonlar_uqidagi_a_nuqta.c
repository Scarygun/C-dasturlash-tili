#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;

    printf("a sonini kiriting: ");
    scanf("%d", &a);

    int distance = a * (a < 0 ? -1 : 1);

    printf("a nuqtasidan 0 gacha bo'lgan masofa: %d\n", distance);

    return 0;
}
