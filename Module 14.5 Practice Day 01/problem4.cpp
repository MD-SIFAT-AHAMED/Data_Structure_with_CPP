#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    stack<int>newSt;
    while(!q.empty())
    {
        int val=q.front();
        q.pop();
        newSt.push(val);
    }
    queue<int>newQ;
    while(!newSt.empty())
    {
        int val=newSt.top();
        newSt.pop();
        newQ.push(val);
    }
    while(!newQ.empty())
    {
        cout<<newQ.front()<<" ";
        newQ.pop();
    }
    return 0;
}