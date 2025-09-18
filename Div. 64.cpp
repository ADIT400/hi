#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    bool found_one = false;
    int zero_count = 0;
    for (char c : s) {
        if (found_one) {
            if (c == '0') {
                zero_count++;
            }
        } else {
            if (c == '1') {
                found_one = true;
            }
        }
    }
    if (zero_count >= 6) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    return 0;
}
