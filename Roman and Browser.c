#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int a[n],total=0;
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    total+=a[i];
    int ans=0;
    for(int b=0;b<k;b++)
    {
        int count=0;
        for(int i=b;i<n;i+=k)
        {
            count+=a[i];
        }
        int r=total-count;
        if(abs(r)>ans)
        ans=abs(r);
    }
    printf("%d\n",ans);
    return 0;
}