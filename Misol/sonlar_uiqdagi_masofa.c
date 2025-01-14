#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;

    printf("a sonini kiriting: ");
    scanf("%d", &a);

    printf("b sonini kiriting: ");
    scanf("%d", &b);

    int distance = abs(a - b);

    printf("a va b sonlari orasidagi masofa: %d\n", distance);

    return 0;
}
