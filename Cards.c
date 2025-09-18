#include<stdio.h>
int main()
{
   int n,count1=0,count2=0;
   scanf("%d",&n);
   char a[n];
   for(int i=0;i<n;i++)
   scanf(" %c",&a[i]);
   for(int i=0;i<=n;i++)
   {
      if(a[i]=='n')
      count1++;
      if(a[i]=='z')
      count2++;
   }
   for(int i=0;i<count1;i++)
   printf("1 ");
   for(int i=0;i<count2;i++)
   printf("0 ");
   return 0;
}










