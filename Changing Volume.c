#include <stdio.h>
#include<stdlib.h>
int main() 
{
    int t;
    scanf("%d",&t);
    int c[t],a,b;
    for(int i=0;i<t;i++)
    {
        scanf("%d %d",&a,&b);
        int d=abs(a-b);
        c[i]=0;
        c[i]+=d/5;
        d%=5;
        c[i]+=d/2;
        d%=2;
        c[i]+=d;
    }
    for(int i=0;i<t;i++)
    printf("%d\n",c[i]);
    return 0;
}