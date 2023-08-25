#include<bits/stdc++.h>
using namespace std;
int main()
{
    //vector<int>v; //type 1
    //vector<int>v(5); //type 2
    //vector<int>v(5,0); //type 4
    // vector<int>v2={10,20,30,40}; //type 4
    // vector<int>v(v2);
    int ar[6]={10,12,15,45,45,62};
    vector<int>v(ar,ar+6);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.size();
    return 0;
}