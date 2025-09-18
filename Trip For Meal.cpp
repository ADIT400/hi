#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,a,b,c;
    cin >>n>>a>>b>>c;
    int ans=0;
    if(n==1)
    ans=0;
    else{
    int x=min(a,min(b,c));
    
    if(x==a || x==b)
    {
        for(int i=1;i<n;i++)
        ans+=x;
    }
    else if(x==c)
    {
        int y=min(a,b);
        ans+=y;
        for(int i=2;i<n;i++)
        ans+=x;
    }
}
cout<<ans<<"\n";
    return 0;
}