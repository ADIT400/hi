#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int b=0,c=1e9,count=0;
    for(int i=0;i<n;i++)
    {
        if (a[i]>b)
        b=a[i];
        if(a[i]<c)
        c=a[i];
    }
    if(b==c || n<=2)
    printf("0");
    else
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]==b ||a[i]==c)
            continue;
            else if(a[i]>c && a[i]<b)
            count++;
        }
        printf("%d",count);
    }
    return 0;
}