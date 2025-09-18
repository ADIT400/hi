#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    int count[t];
    for(int i = 0; i < t; i++)
    {
        int k;
        scanf("%d",&k);
        char a[k + 1];
        scanf("%s",&a);
        count[i]=0;
        while (1)
        {
            int changed=0;
            char temp[k + 1];
            strcpy(temp, a);
            for (int i = 0; i < k - 1; i++)
            {
                if(a[i]=='A' && a[i + 1] == 'P')
                {
                    temp[i + 1] = 'A';
                    changed = 1;
                }   
            }
            if(!changed)
            break;
            count[i]++;
            strcpy(a, temp);
        }
    }
    for (int i = 0; i <t; i++)    
        printf("%d\n", count[i]);
    return 0;
}