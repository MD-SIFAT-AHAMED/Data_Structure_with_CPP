#include<bits/stdc++.h>
using namespace std;
int main()
{
    // list<int>myList={10,20,30,40,500};
    // list<int>newList;
    // newList.assign(myList.begin(),myList.end());
    // // newList=myList;
    // for(int val:newList)
    // {
    //     cout<<val<<endl;
    // }

    list<int>myList={30,20,30,40,50,70,30,49};
    //vector<int>v={500,600,700};
    // myList.push_back(400); //tail a insert kore
    // myList.push_front(400);//head a insert kore

    // myList.pop_back(); //tail a delete kore
    // myList.pop_front();//head a delete kore

    //myList.insert(next(myList.begin(),2),100);
    //myList.erase(next(myList.begin(),2));

    //myList.insert(next(myList.begin(),3),v.begin(),v.end());
    //myList.erase(next(myList.begin(),2),next(myList.begin(),5));
    
    //replace(myList.begin(),myList.end(),30,100);

    // for(int val:myList)
    // {
    //     cout<<val<<endl;
    // }

    
    auto it=find(myList.begin(),myList.end(),30);
    if(it==myList.end())
    {
        cout<<"Not Found";
    }
    else
    {
        cout<<"Found";
    }
    return 0;
}