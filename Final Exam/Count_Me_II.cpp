// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         int ar[n];
//         for(int i=0;i<n;i++)
//         {
//             cin>>ar[i];
//         }
//         map<int,int>mp;
//         int maxCount=0;
//         int maxValue=ar[0];
//         for(int i=0;i<n;i++)
//         {
//             mp[ar[i]]++;
//             if((mp[ar[i]] > maxCount) || (mp[ar[i]]==maxCount && ar[i] > maxValue))
//             {
//                 maxCount = mp[ar[i]];
//                 maxValue = ar[i];
//             }
//         }
//         cout<<maxValue<<" "<< maxCount<<endl;

//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int>mp;
        int maxCount=0;
        int maxValue=INT_MIN;
        for(int i=0;i<n;i++)
        {
            int n;
            cin>>n;
            mp[n]++;
            if(mp[n] > maxCount)
            {
                maxCount = mp[n];
                maxValue = n;
            }
            else if((mp[n]==maxCount && n > maxValue))
            {
                maxValue=n;
            }
        }
        cout<<maxValue<<" "<< maxCount<<endl;
    }
    return 0;
}