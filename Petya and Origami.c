#include<stdio.h>
#include<string.h>
int main()
{
    int n,k;
    scanf("%d %d", &n, &k);
    int red,green,blue;
    red=(2*n+k-1)/k;
    green=(5*n+k-1)/k;
    blue=(8*n+k-1)/k;
    printf("%d\n",red+green+blue);
    return 0;
}