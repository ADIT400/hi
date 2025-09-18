#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    int k;
    cin >> s >> k;
    int n = s.size();
    if (k > n) {
        cout << "impossible\n";
        return 0;
    }
    set<char> distinct(s.begin(), s.end());
    int d = distinct.size();
    cout << max(0, k - d) << "\n";
    return 0;
}
