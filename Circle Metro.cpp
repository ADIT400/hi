#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, a, x, b, y;
    cin >> n >> a >> x >> b >> y;
    while (true) {
        if (a == b) { 
            cout << "YES\n";
            return 0;
        }
        if (a == x || b == y) break;
        a = (a == n ? 1 : a + 1);
        b = (b == 1 ? n : b - 1);
    }
    cout << "NO\n";
    return 0;
}
