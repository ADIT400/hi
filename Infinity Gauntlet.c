#include<stdio.h>
#include<string.h>
int main()
{
    int n,m,r=0,p=0,y=0,g=0,b=0,o=0;
    char a[100][20];
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    scanf("%s",&a[i]);
    m=6-n;
    printf("%d\n",m);
    for(int i=0;i<n;i++)
    {
        if(strcmp(a[i],"red")==0)
            r++;
        else if(strcmp(a[i],"green")==0)
            g++;
        else if(strcmp(a[i],"blue")==0)
            b++;
        else if(strcmp(a[i],"orange")==0)
            o++;
        else if(strcmp(a[i],"yellow")==0)
            y++;
        else if(strcmp(a[i],"purple")==0)
            p++;
    }
        if(g==0)
        printf("Time\n");
        if(y==0)
        printf("Mind\n");
        if(o==0)
        printf("Soul\n");
        if(p==0)
        printf("Power\n");
        if(r==0)
        printf("Reality\n");
        if(b==0)
        printf("Space\n");
    return 0;
}