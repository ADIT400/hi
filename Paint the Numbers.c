#include <stdio.h>
#include <stdbool.h>
#define MAX_N 100
int main() {
    int n;
    scanf("%d", &n);
    int a[MAX_N];
    bool painted[MAX_N] = {0};
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    int color_count = 0;
    for (int i = 0; i < n; i++) {
        if (!painted[i]) { 
            color_count++;  
            int base = a[i]; 
            for (int j = i; j < n; j++) {
                if (a[j] % base == 0) {
                    painted[j] = true;
                }
            }
        }
    }
    printf("%d\n", color_count);
    return 0;
}
