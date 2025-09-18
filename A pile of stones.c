#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int stones=0;
    char a[n];
    scanf(" %s",&a);
    for(int i=0;i<n;i++)
    {
      if(a[i]=='+')
      stones++;
      else if(a[i]=='-')
      {
      stones--;
      if(stones<0)
      stones=0;
      }
    }
    printf("%d\n",stones);
    return 0;
}
