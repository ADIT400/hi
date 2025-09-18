#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int*)b) - (*(int*)a);
}

int main() 
{
    int t;
    scanf("%d", &t);
    int max_side[t];
    for(int test = 0; test < t; test++)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for(int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        qsort(a, n, sizeof(int), cmp);
        for
        for(int s = 1; s <= n; s++)
        {
            if(a[s-1] >= s)
                max_side[test] = s;
        }
    }
    for(int i = 0; i < t; i++)
        printf("%d\n", max_side[i]);
    return 0;
}