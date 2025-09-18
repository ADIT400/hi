#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    long long int d[t];
    for(int j = 0; j < t; j++) {
        long long int a, b, n;
        scanf("%lld %lld %lld", &a, &b, &n);
        if(n % 3 == 0)
            d[j] = a;
        else if(n % 3 == 1)
            d[j] = b;
        else
            d[j] = a ^ b;
    }

    for(int i = 0; i < t; i++)
        printf("%lld\n", d[i]);

    return 0;
}
