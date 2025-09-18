#include <stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int c=abs(a-b);
    int d=0,e=1;
    for(int i=1;i<=c;i++)
    {
        if(i%2==0)
        {
            d+=e;
            e++;
        }
        else 
        d+=e;
    }
    printf("%d",d);
    return 0;
}
