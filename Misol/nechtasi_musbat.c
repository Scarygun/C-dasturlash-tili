#include <stdio.h>

int main() {
    int a, b, c;
    int count = 0;

    printf("a sonini kiriting: ");
    scanf("%d", &a);
    printf("b sonini kiriting: ");
    scanf("%d", &b);
    printf("c sonini kiriting: ");
    scanf("%d", &c);

    if (a > 0) count++;
    if (b > 0) count++;
    if (c > 0) count++;

    printf("Musbat sonlar soni: %d\n", count);

    return 0;
}
