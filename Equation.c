#include <stdio.h>
int main() 
{
    int n,t=0;
    scanf("%d", &n);
    int a=n*9,b=n*8;
    if(a-b==n)
    printf("%d %d",a,b);
    return 0;
}