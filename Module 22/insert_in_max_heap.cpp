// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     vector<int>v;
//     for(int i=0;i<n;i++)
//     {
//         int x;
//         cin>>x;
//         v.push_back(x);
//         int cur_inx=v.size()-1;
//         while(cur_inx!=0)
//         {
//             int parent_inx=(cur_inx-1)/2;
//             if(v[parent_inx] < v[cur_inx])
//             {
//                 swap(v[parent_inx],v[cur_inx]);
//                 cur_inx=parent_inx;
//             }
//             else 
//                 break;
//         }
//     }
//     for(int val:v) cout<<val<<" ";
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     vector<int>v;
//     for(int i=0;i<n;i++)
//     {
//         int x;
//         cin>>x;
//         v.push_back(x);
//         int cur_inx=v.size()-1;
//         while(cur_inx!=0)
//         {
//             int parent_inx=(cur_inx-1)/2;
//             if(v[parent_inx] < v[cur_inx])
//             {
//                 swap(v[parent_inx],v[cur_inx]);
//                 cur_inx=parent_inx;
//             }
//             else
//             {
//                 break;
//             }
//         }
//     }
//     for(int val:v)
//     {
//         cout<<val<<" ";
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
        int cur_inx=v.size()-1;
        while(cur_inx!=0)
        {
            int parent_inx=(cur_inx-1)/2;
            if(v[parent_inx] < v[cur_inx])
            {
                swap(v[parent_inx],v[cur_inx]);
                cur_inx=parent_inx;
            }
            else
            {
                break;
            }
        }
    }
    for(int val:v)
    {
        cout<<val<<" ";
    }
    return 0;
}