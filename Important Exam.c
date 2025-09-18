#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    char s[n][m+1];
    for(int i=0;i<n;i++)
        scanf("%s", s[i]);
    int a[m];
    for(int i=0;i<m;i++)
    {
    scanf("%d",&a[i]);
    }
    int count=0;
    for(int j=0;j<m;j++)
    {
    int f[5]={0};
    for(int i=0;i<n;i++)
    f[s[i][j]-'A']++;
    int m=0;
    for(int k=0;k<5;k++)
    {
        if(f[k]>m)
        m=f[k];
    }
    count+=m*a[j];
    }
    printf("%d\n",count);
    return 0;
}