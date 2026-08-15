#include <stdio.h>

int main() {
    int a = 100;
    int b = 18;
    int c = 26;
    scanf("%d", &a);
    if (a > b && a > c) {
        printf("\nA eh o menor");
    }
    if (b > a && b > c) {
        printf("\nB eh o menor");
    }
    else {
        printf("\nC eh o menor");
    }

    return 0;
}