#include<stdio.h>
int main()
{
  int n, m;
  scanf("%d", &n);
  int a[n];
  for(int i = 0; i < n; i++)
  scanf("%d", &a[i]);
  scanf("%d", &m);
  int b[m];
  for(int i = 0; i < m; i++)
  scanf("%d", &b[i]);
  for(int i = 0; i < n; i++)
  {
  for(int j = 0; j < m; j++)
  {
  int sum = a[i] + b[j];
  int found = 0;
  for(int k = 0; k < n; k++)
  {
  if(sum == a[k])
  {
  found = 1;
  break;
  }
  }
  if(!found)
  {
  for(int k = 0; k < m; k++)
  {
  if(sum == b[k])
  {
  found = 1;
  break;
  }
  }
  }
  if(!found)
  {
  printf("%d %d\n", a[i], b[j]);
  return 0;
  }
  }
  }
  return 0;
}