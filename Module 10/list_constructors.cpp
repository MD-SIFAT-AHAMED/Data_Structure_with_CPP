#include<bits/stdc++.h>
using namespace std;
int main()
{
    // list<int>myList;
    // list<int>myList(10,5);
    //list<int>list2={12,34,76,546};
    //list<int>myList(list2);//copy
    // cout<<myList.front()<<endl;
    // cout<<myList.size()<<endl;
    int ar[5]={10,20,30,20,10};
    vector<int>v={500,4399,9440,82349};
    list<int>myList(v.begin(),v.end());

    // for(auto it=myList.begin();it!=myList.end();it++)
    // {
    //     cout<<*it<<endl;
    // }

    //Range based for loop
    for(int val:myList)
    {
        cout<<val<<endl;
    }
    return 0;
}