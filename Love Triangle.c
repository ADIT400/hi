#include <stdio.h>
#include<stdlib.h>
int main() 
{
    int n;
    scanf("%d",&n);
    int a[n],c=0;
    for(int i=1;i<=n;i++)
    scanf("%d",&a[i]);
    for(int i=1;i<=n;i++)
    {
        if(i!=a[i])
        {
            if(i!=a[a[i]] && a[a[a[i]]]==i)
            {
            c=1;
            }
        }
    }
    if(c==1)
    printf("YES");
    else
    printf("NO");
    return 0;
}