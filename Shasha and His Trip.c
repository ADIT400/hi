#include <stdio.h>
int main() 
{
    int n,v;
    scanf("%d %d",&n,&v);
    int f=n-1,m=0;
    if(v>=f)
    m=f;
    else if(v<f)
    {
        m=v;
        for(int i=2;i<=n-v;i++)
        {
            m+=i;
        }
    }
    printf("%d",m);
    return 0;
}