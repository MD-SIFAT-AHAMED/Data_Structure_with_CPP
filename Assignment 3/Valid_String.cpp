#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        stack<char>st;
        string a;
        cin>>a;
        for(char c:a)
        {
            if(c=='A')
            {
                if(st.empty())
                {
                    st.push(c);
                }
                else if(!st.empty())
                {
                    int x=st.top();
                    if(c==x) st.push(c);
                    else st.pop();
                }
            }
            else if(c=='B')
            {
                if(st.empty())
                {
                    st.push(c);
                }
                else if(!st.empty())
                {
                    int x=st.top();
                    if(c==x) st.push(c);
                    else st.pop();
                }
            }
        }
        if(st.empty()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int test;
//     cin>>test;
//     while(test--)
//     {
//         stack<char>st;
//         string a;
//         cin>>a;
//         for(char c:a)
//         {
//             if(st.empty() || c==st.top())
//             {
//                 st.push(c);
//             }
//             else
//             {
//                 st.pop();
//             }
//         }
//         if(st.empty()) cout<<"YES"<<endl;
//         else cout<<"NO"<<endl;
//     }
//     return 0;
// }