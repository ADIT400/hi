#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a=1,b=1,c=0;
    for (int i = 1; i <=n; i++) 
    {
        if(c<i)
        c=a+b, a=b, b=c;
        if(i==0 || i==1 || i==c)
        printf("O");
        else
        printf("o");
    }
    return 0;
}
