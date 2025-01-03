#include <stdio.h>

int main() {
    char c;

    printf("Berilgan charni kiriting: ");
    scanf(" %c", &c);

    if (c >= '0' && c <= '9') {
        printf("Natija: son\n");
    } else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        printf("Natija: alpha\n");
    } else {
        printf("Natija: boshqa\n");
    }

    return 0;
}
