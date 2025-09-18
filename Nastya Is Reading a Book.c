#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d", &n);
    int l[100],r[100];
    for(int i=0; i<n; i++)
    {
        scanf("%d %d", &l[i], &r[i]);
    }
    scanf("%d", &k);
    int count = 0;
    for(int i=0; i<n; i++)
    {
        if(l[i]>=k || r[i]>=k)
            count++;
    }
    printf("%d\n", count);
    return 0;
}