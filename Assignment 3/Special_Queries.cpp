#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<string>q;
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        if(x==0)
        {
            string a;
            cin>>a;
            q.push(a);
        }
        else
        {
            if(q.empty())
            {
                cout<<"Invalid"<<endl;
            }
            else
            {
                cout<<q.front()<<endl;
                q.pop();
            }  
        }
    }
    return 0;
}