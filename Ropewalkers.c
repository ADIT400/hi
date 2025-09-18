#include <stdio.h>
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if (a > b)
     swap(&a, &b);
    if (a > c) 
    swap(&a, &c);
    if (b > c) 
    swap(&b, &c);
    int t = 0;
    if (b - a < d)
        t += d - (b - a);
    if (c - b < d)
        t += d - (c - b);

    printf("%d\n", t);
    return 0;
}
