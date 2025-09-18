#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char home[4];
    scanf("%s", home);
    char f[10];
    for(int i=0;i<n;i++)
    scanf("%s", f);
    if(n%2==0)
    printf("home");
    else
    printf("contest");
    return 0;
}