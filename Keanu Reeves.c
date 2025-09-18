#include <stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    char s[n];
    scanf("%s",s);
    int d=n-1;
    for(int i=0;i<d;i++)
    {
        if(s[i]=s[i+1])
        {
            s[i+1]=s[d];
            d--;
            
        }
    }
    return 0;
}
