#include <stdio.h>

int main() {
    int son;

    printf("Berilgan sonni kiriting: ");
    scanf("%d", &son);

    if (son % 3 == 0 && son % 4 == 0) {
        printf("Natija: true\n");
    } else {
        printf("Natija: false\n");
    }

    return 0;
}
