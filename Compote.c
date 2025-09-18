#include <stdio.h>
#include<stdlib.h>
int main() 
{
    int a,b,c,d=0;
    scanf("%d %d %d",&a,&b,&c);
    if(a<1 || b<2 || c<4)
    printf("0");
    else
    {
    for(int i=0;a>=1 && b>=2 && c>=4;i++)
    {
        a-=1;
        b-=2;
        c-=4;
        d+=7;
    }
    printf("%d",d);
}
    return 0;
}