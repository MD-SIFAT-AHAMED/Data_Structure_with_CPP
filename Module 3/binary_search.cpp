#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int x;
    cin>>x;
    int l=0;
    int r=n-1;
    bool flag=false;
    while(l<=r)
    {
        int mid_index= (l+r)/2;
        if(ar[mid_index]==x)
        {
            flag=true;
            break;
        }
        if(x>ar[mid_index])
        {
            //dane jabe
            l=mid_index+1;
        }
        else
        {
            //bame jabe
            r=mid_index-1;
        }
    }
    if(flag==true) cout<<"yes";
    else cout<<"no";
    return 0;
}