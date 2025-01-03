#include <stdio.h>

int main() {
    int yil;

    printf("Berilgan yilni kiriting: ");
    scanf("%d", &yil);

    if ((yil % 4 == 0 && yil % 100 != 0) || (yil % 400 == 0)) {
        printf("Natija: true\n");
    } else {
        printf("Natija: false\n");
    }

    return 0;
}
