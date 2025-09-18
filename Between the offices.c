#include<stdio.h>
int main()
{
   int n,countS=0,countF=0;
   scanf("%d", &n);
   char a[n];
    for(int i=0; i<n; i++)
        scanf(" %c", &a[i]);
    for(int i=0; i<n; i++)
    if(a[i]=='S'&& a[i+1]=='F')
        countS++;
    else if(a[i]=='F' && a[i+1]=='S')
        countF++;
    if(countS > countF)
        printf("YES");
    else
        printf("NO");
}