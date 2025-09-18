#include<stdio.h>
int main()
{
  int n,a,b,f=0;
  scanf("%d",&n);
  if(n>1 && n<=100)
  {
  for(int i=1;i<=n;i++)
  {
  for(int j=1;j<=n;j++)
  {
  a=i;
  b=j;
  if(a%b==0 && a*b>n && a/b<n)
  {
  f=1;
  break;
  }
  }
  if(f)
  break;
  }
  if(f==0)
  printf("-1");
  else
  printf("%d %d",a,b);
  }
  else
  printf("-1");
  return 0;
}