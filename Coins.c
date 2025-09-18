#include <stdio.h>
#include<stdlib.h>
int main() 
{
    int n,s,count=0;
    scanf("%d %d",&n,&s);
    int diff=s;
    for(int i=n;i>0;i--)
    {
        count+=diff/i;
        diff%=i;
        if(diff==0)
        break;
    }
    printf("%d",count);
    return 0;
}