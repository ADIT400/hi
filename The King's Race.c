#include <stdio.h>
int main() {
    long long n, x, y;
    scanf("%lld %lld %lld", &n, &x, &y);
    long long white_dist = (x - 1 > y - 1) ? x - 1 : y - 1;
    long long black_dist = (n - x > n - y) ? n - x : n - y;
    if (white_dist <= black_dist)
        printf("White\n");
    else
        printf("Black\n");
    return 0;
}
