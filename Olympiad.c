#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    int count = 0;
    int prev=-1;
    for(int i = 0; i < n; i++)
    {
        if(a[i] !=0 && a[i] != prev)
        {
            count++;
            prev = a[i];
        }
    }
    printf("%d\n", count);
    return 0;
}