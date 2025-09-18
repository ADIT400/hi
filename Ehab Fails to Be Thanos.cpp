#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a[2*n];
    priority_queue<int> pq;
    priority_queue<int> pq1;
    for(int i=0;i<2*n;i++)
    {
        int x;
        cin>>x;
        pq.push(x);
        pq1.push(x);
    }
     int c=0,d=0;
    for(int i=0;i<n;i++)
    {
        c+=pq.top();
        pq.pop();
    }  
    for(int i=n;i<2*n;i++)
    {
        d+=pq.top();
        pq.pop();
    }
    if(c==d)
    {
        cout<<-1;
    }
    else
    {
        while(!pq1.empty())
        {
            cout<<pq1.top()<<" ";
            pq1.pop();
        }
    }
    return 0; 
}
