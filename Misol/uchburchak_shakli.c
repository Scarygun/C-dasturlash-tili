#include <stdio.h>

int main() {
    int a, b, c;

    printf("Berilgan a = ");
    scanf("%d", &a);
    printf("Berilgan b = ");
    scanf("%d", &b);
    printf("Berilgan c = ");
    scanf("%d", &c);

    if (a == b && b == c) {
        printf("Natija: equilateral\n");
    } else if (a == b || b == c || a == c) {
        printf("Natija: isosceles\n");
    } else {
        printf("Natija: scalene\n");
    }

    return 0;
}
