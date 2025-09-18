#include <stdio.h>
#include<stdlib.h>
int main() 
{
    int n,k,t;
    scanf("%d %d %d",&n,&k,&t);
    if(t<=k)
    printf("%d",t);
    else if(t>k && t<=n)
    printf("%d",k);
    else if(t>n && t<=(n+k))
    printf("%d",k-(t-n));
    else
    printf("0");
    return 0;
}