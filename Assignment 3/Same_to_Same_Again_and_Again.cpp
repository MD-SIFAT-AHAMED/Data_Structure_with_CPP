// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     stack<int>st;
//     int n,n1;
//     cin>>n>>n1;
//     for(int i=0;i<n;i++)
//     {
//         int x;
//         cin>>x;
//         st.push(x);
//     }
//     queue<int>q;
//     for(int i=0;i<n1;i++)
//     {
//         int x;
//         cin>>x;
//         q.push(x);
//     }

//     bool flag=true;
//     while(!st.empty() && !q.empty())
//     {
//         if(st.size()!=q.size())
//         {
//             flag=false;
//             break;
//         }
//         else if(st.top()!=q.front())
//         {
//             flag=false;
//             break;
//         }
//         else
//         {
//             st.pop();
//             q.pop();
//             continue;
//         }
//     }
//     if(flag==true)
//     {
//         cout<<"YES"<<endl;
//     }
//     else
//     {
//         cout<<"NO"<<endl;
//     }
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    int n,n1;
    cin>>n>>n1;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    queue<int>q;
    for(int i=0;i<n1;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    list<int>hel;
    list<int>hell;
    bool flag=true;
     while(!st.empty()) 
    {
        int x=st.top();
        st.pop();
        hel.push_front(x); 
    }
    while (!q.empty())
    {
        int xx=q.front();
        q.pop();
        hell.push_front(xx);
    }
    
    for(auto it=hel.begin();it!=hel.end();it++)
    {
        if(hel.size() != hell.size())
        {
            flag=false;
            break;
        }  
        else if(*hel.begin() != *hell.begin())
        {
            flag=false;
            break;
        }
    }
    if(flag==true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}