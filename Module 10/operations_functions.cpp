#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>myList={10,10,10,10,20,10,48,11,9,13,10,15,2,5,7};
    //myList.remove(10);
    //myList.sort(); //choto theke boro
    //myList.sort(greater<int>()); //Boro theke choto
    // myList.unique();
    myList.reverse();
    for(int val:myList)
    {
        cout<<val<<endl;
    }
    return 0;
}