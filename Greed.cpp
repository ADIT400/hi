#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;
    long long count=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>y;
        count+=y;
    }
    priority_queue<int>pq;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        pq.push(x);
    }
    int a=pq.top();
    pq.pop();
    int b=pq.top();
    if((a+b)>=count)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0; 
}
