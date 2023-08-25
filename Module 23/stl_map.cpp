// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     map<string, int> mp;
//     mp["Sakib al hasn"] = 79; // O(logN)
//     mp.insert({"akib", 100});
//     mp.insert({"akib", 150});
//     mp["tamim"] = 79;

//     // for (auto it = mp.begin(); it != mp.end(); it++)
//     // {
//     //     cout << it->first << " " << it->second << endl; // O(logN)
//     // }

//     cout << mp.count("akib") << endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;
    // mp.insert({"sifat",458});
    // mp.insert({"sdjhiat",58});
    // mp.insert({"riht",43});
    mp["sifat"]=47;
    mp["shakib"]=58;
    mp["hiel"]=93;

    // for(auto it=mp.begin();it!=mp.end();it++)
    // {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    cout<<mp["sifat"];

    if(mp.count("sifat"))
    {
        cout<<"yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}