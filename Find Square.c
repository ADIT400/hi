#include <stdio.h>
int main() 
{
    int n, m;
    scanf("%d %d", &n, &m);
    
    int min_r = n, max_r = -1;
    int min_c = m, max_c = -1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char ch;
            scanf(" %c", &ch);
            if (ch == 'B') {
                if (i < min_r) min_r = i;
                if (i > max_r) max_r = i;
                if (j < min_c) min_c = j;
                if (j > max_c) max_c = j;
            }
        }
    }

    int r = (min_r + max_r) / 2 + 1;
    int c = (min_c + max_c) / 2 + 1;

    printf("%d %d\n", r, c);
    return 0;
}
