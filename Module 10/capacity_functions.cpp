#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>myList={10,20,30,40,50};
    // myList.resize(2);
    // myList.resize(5,100);
    cout<<myList.max_size();
    cout<<myList.size()<<endl;
    for(int val:myList)
    {
        cout<<val<<endl;
    }
    return 0;
}