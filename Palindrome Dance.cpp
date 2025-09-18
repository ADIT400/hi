#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    int cost = 0;
    bool impossible = false;
    for (int i = 0; i < n / 2; i++) {
        int left = v[i];
        int right = v[n - 1 - i];
        if (left != right) {
            if (left == 2 && right != 2) {
                cost += (right == 0 ? a : b);
            } else if (right == 2 && left != 2) {
                cost += (left == 0 ? a : b);
            } else if (left == 2 && right == 2) {
                cost += min(2 * a, 2 * b);
            } else {
                impossible = true;
                break;
            }
        } else {
            if (left == 2) {
                cost += min(2 * a, 2 * b);
            }
        }
    }
    if (n % 2 == 1 && v[n / 2] == 2) {
        cost += min(a, b);
    }
    if (impossible) cout << -1 << endl;
    else cout << cost << endl;
    return 0;
}
