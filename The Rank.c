#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int m[n][4],sum[n],Rank=1;
    for(int i=0;i<n;i++)
    {
        sum[i]=0;
        for(int j=0;j<4;j++)
        {
            scanf("%d",&m[i][j]);
            sum[i] += m[i][j];
        }    
    }
    for(int i=1;i<n;i++)
    {
        if(sum[0]<sum[i])
        Rank++;
    }
    printf("%d\n", Rank);
    return 0;
}