#include <stdio.h>
int main() 
{
    int l, r, a;
    scanf("%d %d %d", &l, &r, &a);
    int diff = l > r ? l - r : r - l;
    int add = a > diff ? diff : a;
    if(l < r) l += add;
    else r += add;
    a -= add;
    int pairs = (l < r ? l : r) + a / 2;
    printf("%d\n", pairs * 2);
    return 0;
}