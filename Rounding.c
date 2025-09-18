#include<stdio.h>
int main()
{
  int n,a;
  scanf("%d", &n);
  if(n%10<=5)
  a=(n/10)*10;
  else
    a=(n/10+1)*10;
  printf("%d\n", a);  
  return 0;
}