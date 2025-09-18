#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
    int last = -100; 
    int totalWeight = 0, count = 0;
    for (char c : s) {
        int val = c - 'a' + 1;
        if (val - last >= 2) { 
            totalWeight += val;
            count++;
            last = val;
            if (count == k) break;
        }
    }
    if (count < k) cout << -1 << "\n";
    else cout << totalWeight << "\n";
    return 0;
}
