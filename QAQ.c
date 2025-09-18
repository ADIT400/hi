#include <stdio.h>
#include <string.h>
int main() 
{
    char s[101];
    scanf("%s", s);
    int l = strlen(s), count = 0;
    for(int i = 0; i < l; i++)
    {
        if(s[i]=='Q')
        {
            for(int j=i+1;j<l;j++)
            {
                if(s[j]=='A')
                {
                    for(int k=j+1;k<l;k++)
                    {
                        if(s[k]=='Q')
                        count++;
                    }
                }
            }
        }
    }
    printf("%d\n", count);
    return 0;
}
