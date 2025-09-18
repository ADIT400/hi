#include <stdio.h>
int main() 
{
    int n;
    scanf("%d",&n);
    int a[n],c=(n+1)/2,b=0,d=0;
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        b++;
        else if(a[i]<0)
        d++;
    }
        if(b>=c)
        printf("4\n");
        else if(d>=c)
        printf("-4\n");
        else
        printf("0\n");
    return 0;
}