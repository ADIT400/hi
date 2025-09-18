#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n;
    scanf("%lld", &n);
    set<string> s;
    for(int i=0;i<n;i++)
    {
        string str;
        cin >> str;
        set<char> temp(str.begin(), str.end());
        string t(temp.begin(), temp.end());
        s.insert(t);
    }
    cout << s.size() << "\n";
    return 0;
}
