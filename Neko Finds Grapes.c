#include <stdio.h>
int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a, even_a = 0, odd_a = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        if (a % 2 == 0) even_a++;
        else odd_a++;
    }

    int b, even_b = 0, odd_b = 0;
    for (int i = 0; i < m; i++) {
        scanf("%d", &b);
        if (b % 2 == 0) even_b++;
        else odd_b++;
    }

    int result = (even_a < odd_b ? even_a : odd_b) + (odd_a < even_b ? odd_a : even_b);
    printf("%d\n", result);

    return 0;
}
