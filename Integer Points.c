#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, m;
        scanf("%d", &n);
        
        int even_p = 0, odd_p = 0;
        for (int i = 0; i < n; i++) {
            int x;
            scanf("%d", &x);
            if (x % 2 == 0)
                even_p++;
            else
                odd_p++;
        }

        scanf("%d", &m);
        int even_q = 0, odd_q = 0;
        for (int i = 0; i < m; i++) {
            int x;
            scanf("%d", &x);
            if (x % 2 == 0)
                even_q++;
            else
                odd_q++;
        }

        long long result = 1LL * even_p * even_q + 1LL * odd_p * odd_q;
        printf("%lld\n", result);
    }

    return 0;
}
