#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore(); 
    while(t--)
    {
        string sentence;
        getline(cin,sentence);
        string word;
        stringstream ss(sentence);
        map<string,int>mp;
        int maxCount = 0;
        string maxWord;
        while(ss >> word)
        {
            mp[word]++;
            if (mp[word] > maxCount)
            {
                maxCount=mp[word];
                maxWord=word;
            }
        }
        cout<<maxWord<<" "<< maxCount<<endl;
    }
    return 0;
}