#include <stdio.h>

int main() {
    int a, b, c;
    float average;

   
    printf("a sonini kiriting: ");
    scanf("%d", &a);
    printf("b sonini kiriting: ");
    scanf("%d", &b);
    printf("c sonini kiriting: ");
    scanf("%d", &c);

    average = (a + b + c) / 3.0;

    printf("O'rtacha qiymat: %.2f\n", average);

    return 0;
}
