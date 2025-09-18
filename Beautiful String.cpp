#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    vector<string> v;
    vector<int> ans;
    for(int i = 0; i < t; i++)
    {
        int f = 0;
        string c;
        cin >> c;
        for(int j = 0; j < c.size() - 1; j++)
        {
            if(c[j] == c[j + 1] && c[j] != '?')
            {
                ans.push_back(1);
                f = 1;
                break;
            }
        }
        if(f == 0)
        {
            for(int j = 0; j < c.size(); j++)
            {
                if(c[j] == '?')
                {
                    vector<char> ch = {'a', 'b', 'c'};
                    for(int k = 0; k < 3; k++)
                    {
                        if((j > 0 && c[j - 1] == ch[k]) || (j < c.size() - 1 && c[j + 1] == ch[k]))
                        {
                            continue;
                        }
                        else
                        {
                            c[j] = ch[k];
                            break; 
                        }
                    }
                }
            }
            int valid = 1;
            for(int j = 0; j < c.size() - 1; j++)
            {
                if(c[j] == c[j + 1])
                {
                    valid = 0;
                    break;
                }
            }
            if(valid)
            {
                v.push_back(c);
                ans.push_back(0);
            }
            else
            {
                ans.push_back(1);
                v.push_back(""); 
            }
        }
        else
        {
            v.push_back(""); 
        }
    }
    for(int i = 0; i < t; i++)
    {
        if(ans[i] == 1)
            cout << "-1\n";
        else
            cout << v[i] << "\n";
    }
    return 0;
}