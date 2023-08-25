#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // while(n>0) //log(N)
    // {
    //     int digit=n%10;
    //     cout<<digit<<endl;
    //     n/=10;
    // }

    for(int i=1;i<=n;i=i*2) //log(N)
    {
        cout<<i<<endl;
    }
    return 0;
}