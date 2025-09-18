#include <stdio.h>
#include<stdlib.h>
int main() 
{
    int t;
    scanf("%d",&t);
    int s[t];
    for(int i=0;i<t;i++)
    {
        int a,b,c;
        s[i]=0;
        scanf("%d %d %d",&a,&b,&c);
        if(c>=2 && b>=1)
        {
        for(int j=0;c>=2 && b>=1;j++)
        {
            s[i]+=3;
            c-=2,b--;
        }
    }
    if(b>=2 && a>=1)
    {
        for(int j=0;b>=2 && a>=1;j++)
        {
            s[i]+=3;
            b-=2,a-=1;
        }
    }
    }
    for(int i=0;i<t;i++)
    printf("%d\n",s[i]);
    return 0;
}