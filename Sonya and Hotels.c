#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, d;
    scanf("%d %d", &n, &d);
    int a[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        int candidates[2];
        candidates[0] = a[i] - d;
        candidates[1] = a[i] + d;

        for (int k = 0; k < 2; k++) {
            int pos = candidates[k];
            int is_duplicate = 0;
            for (int j = 0; j < n; j++) {
                if (a[j] == pos) {
                    is_duplicate = 1;
                    break;
                }
            }
            if (is_duplicate) continue;
            int min_dist = abs(pos - a[0]);
            for (int j = 1; j < n; j++) {
                int dist = abs(pos - a[j]);
                if (dist < d) {
                    min_dist = -1;
                    break;
                }
                if (dist < min_dist) {
                    min_dist = dist;
                }
            }

            if (min_dist == d) {
                count++;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}
