// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string sifat;
//     getline(cin,sifat);
//     string word;
//     stringstream ss(sifat);
//     map<string,int>mp;
//     while(ss>>word)
//     {
//         mp[word]++;
//     }
//     for(auto it=mp.begin();it !=mp.end();it++)
//     {
//         cout<<it->first<<" "<<it->second<<endl;
//     }
//     cout<<mp["she"]<<endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string sifat;
    getline(cin,sifat);
    string word;
    stringstream ss(sifat);
    map<string,int>mp;
    while(ss>>word)
    {
        mp[word]++;
    }
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    return 0;
}