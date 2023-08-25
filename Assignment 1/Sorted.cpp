#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        int flag=1;
        for(int i=0;i<n-1;i++)
        {
            if(ar[i+1]<ar[i])
            {
                flag=0;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"NO"<<endl;
        }
        else 
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}