#include<stdio.h>

int main() {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    
    int a[n + 1];
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }

    long long left = 1e9, right = 1e9;

    for (int i = 1; m - i > 0; i++) {
        if (a[m - i] > 0 && a[m - i] <= k) {
            left = i * 10;
            break;
        }
    }

    for (int i = 1; m + i <= n; i++) {
        if (a[m + i] > 0 && a[m + i] <= k) {
            right = i * 10;
            break;
        }
    }
    long long ans = left < right ? left : right;
    printf("%lld\n", ans);

    return 0;
}
