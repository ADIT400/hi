#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        vector<int> diff(n);
        bool bad = false;
        for (int i = 0; i < n; i++) {
            diff[i] = b[i] - a[i];
            if (diff[i] < 0) bad = true;
        }
        if (bad) {
            cout << "NO\n";
            continue;
        }
        int l = -1, r = -1;
        for (int i = 0; i < n; i++) {
            if (diff[i] > 0) {
                if (l == -1) l = i;
                r = i;
            }
        }
        if (l == -1) {
            cout << "YES\n";
            continue;
        }
        int k = diff[l];
        bool ok = true;
        for (int i = l; i <= r; i++) {
            if (diff[i] != k) {
                ok = false;
                break;
            }
        }
        for (int i = 0; i < l; i++) if (diff[i] != 0) ok = false;
        for (int i = r + 1; i < n; i++) if (diff[i] != 0) ok = false;
        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
