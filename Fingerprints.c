#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int s[n],f[m];
    for(int i=0;i<n;i++)
    scanf("%d",&s[i]);
    for(int i=0;i<m;i++)
    scanf("%d",&f[i]);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(s[i]==f[j])
            printf("%d ",s[i]);
        }
    }
    printf("\n");
    return 0;
}