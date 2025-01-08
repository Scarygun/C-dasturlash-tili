#include <stdio.h>

int main() {
    int a, b, c;

    printf("Berilgan a = ");
    scanf("%d", &a);
    printf("Berilgan b = ");
    scanf("%d", &b);
    printf("Berilgan c = ");
    scanf("%d", &c);

    if (a > 0 && b > 0 && c > 0 && 
        (a + b > c) && 
        (a + c > b) && 
        (b + c > a)) {
        printf("Natija: true\n");
    } else {
        printf("Natija: false\n");
    }

    return 0;
}
