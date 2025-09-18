#include<stdio.h>
int main()
{
    int R,C,t=0;
    scanf("%d %d",&R,&C);
    char a[R][C];
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            scanf(" %c",&a[i][j]);
        }
    }
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            if(a[i][j]=='S')
            {
                if((j + 1 < C && a[i][j + 1] == 'W') ||
                    (j - 1 >= 0 && a[i][j - 1] == 'W') ||
                    (i + 1 < R && a[i + 1][j] == 'W') ||
                    (i - 1 >= 0 && a[i - 1][j] == 'W'))
                {
                    t=1;
                    break;
                }    
            }
        }
        if(t==1)
        {
            break;
        }
    }
    if(t==1)
    {
        printf("No\n");
    }
    else
    {
        printf("Yes\n");
        for(int i=0;i<R;i++)
        {
            for(int j=0;j<C;j++)
            {
                if(a[i][j]=='.')
                {
                    a[i][j]='D';
                }
                printf("%c",a[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}