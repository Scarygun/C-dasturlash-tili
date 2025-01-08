#include <stdio.h>

int main() {
    int son;

    printf("Berilgan son: ");
    scanf("%d", &son);

    if (son == 1) {
        printf("Natija: Dushanba\n");
    } else if (son == 2) {
        printf("Natija: Seshanba\n");
    } else if (son == 3) {
        printf("Natija: Chorshanba\n");
    } else if (son == 4) {
        printf("Natija: Payshanba\n");
    } else if (son == 5) {
        printf("Natija: Juma\n");
    } else if (son == 6) {
        printf("Natija: Shanba\n");
    } else if (son == 7) {
        printf("Natija: Yakshanba\n");
    } else {
        printf("Natija: none\n");
    }

    return 0;
}
