#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    scanf("%s",s);
    int n=strlen(s),l=0;
    if(n<3)
    printf("No");
    else
    {
    for(int i=0;i<n-2;i++)
    {
        if(s[i]!='.')
        {
            if((s[i+1]!='.') && (s[i+1]!=s[i]))
            {
                if((s[i+2]!='.') && (s[i+2]!=s[i]) && (s[i+2]!=s[i+1]))
                {
                printf("Yes");
                l=1;
                break;
                }
            } 
        }

    }
    if(!l)
       printf("No");
}
    return 0;
}