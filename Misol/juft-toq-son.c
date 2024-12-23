#include <stdio.h>

const char* aniqlash(int a) {
    if (a % 2 == 0) {
        return "juft";
    } else {
        return "toq";
    }
}

int main() {
    int a;

    printf("Sonni kiriting: ");
    scanf("%d", &a);

    printf("Natija: %s\n", aniqlash(a));

    return 0;
}
