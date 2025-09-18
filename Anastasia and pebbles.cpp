#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    long long k;
    cin >> n >> k;
    vector<int>w(n);
    long long count = 0;
    for (int i = 0;i < n;i++) {
        cin >> w[i];
        count += w[i] / k;
        if(w[i] % k != 0)
            count += 1;
    }
    long long days = (count+ 1) / 2;
    cout << days << endl;
    return 0;
}
