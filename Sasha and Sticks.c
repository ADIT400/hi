#include <stdio.h>
int main() 
{
    long long n,k;
    scanf("%lld %lld",&n,&k);
    long long m=n/k;
    if(m%2==0)
    printf("NO");
    else
    printf("YES");
    return 0;
}