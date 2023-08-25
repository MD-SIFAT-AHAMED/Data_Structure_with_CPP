#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; //step 1
    cin>>n;//step 1
    int ar[n];//step 1
    for(int i=0;i<n;i++)//step O(N)
    {
        cin>>ar[i];//step O(N)

    }
    int sum=0;//step 1
    for(int i=0;i<n;i++)//step O(N)
    {
        sum+=ar[i];//step O(N)
    }
    cout<<sum;//step 1

    //--------------------
            //O(N)
    return 0;
}