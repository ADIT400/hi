#include <stdio.h>

int main() {
    unsigned long int n;
    scanf("%lu", &n);

    unsigned long int a, b, c;

    if ((n - 2) % 3 != 0) {
        a = 1;
        b = 1;
        c = n - 2;
    } else if ((n - 3) % 3 != 0) {
        a = 1;
        b = 2;
        c = n - 3;
    } else {
        a = 2;
        b = 2;
        c = n - 4;
    }

    printf("%lu %lu %lu\n", a, b, c);
    return 0;
}
