#include <bits/stdc++.h>
using namespace std;
int main() {
    char c, b;
    int n;
    cin >> c >> b >> n;
    vector<char> dirscw= {'v', '<', '^', '>'};
    vector<char> dirsccw= {'v', '>', '^', '<'};
    int startcw = find(dirscw.begin(), dirscw.end(), c) - dirscw.begin();
    int endcw = find(dirscw.begin(), dirscw.end(), b) - dirscw.begin();
    int startccw = find(dirsccw.begin(), dirsccw.end(), c) - dirsccw.begin();
    int endccw = find(dirsccw.begin(), dirsccw.end(), b) - dirsccw.begin();
    n%=4;
    int cw = (startcw + n) % 4;
    int ccw = (startccw + n) % 4;
    if(cw == endcw && ccw == endccw)
        cout << "undefined";
    else if(cw == endcw)
        cout << "cw";
    else if(ccw == endccw)
        cout << "ccw";
    return 0;
}