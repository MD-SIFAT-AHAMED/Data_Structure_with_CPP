// #include<bits/stdc++.h>
// using namespace std;
// void insert_heap(vector<int>&v,int x)
// {
//     v.push_back(x);
//     int cur_inx=v.size()-1;
//     while (cur_inx!=0)
//     {
//         int parent_inx=(cur_inx-1)/2;
//         if(v[parent_inx] < v[cur_inx])
//         {
//             swap(v[parent_inx],v[cur_inx]);
//             cur_inx=parent_inx;
//         }
//         else 
//         {
//             break;
//         }
//     }
    
// }
// void print_heap(vector<int>v)
// {
//     for(int val:v)
//     {
//         cout<<val<<" ";
//     }
//     cout<<endl;
// }
// void delete_heap(vector<int>&v)
// {
//     v[0]=v[v.size()-1];
//     v.pop_back();
//     int cur_inx=0;
//     while (true)
//     {
//         int left_inx=cur_inx*2+1;
//         int right_inx=cur_inx*2+2;
//         int last_inx=v.size()-1;
//         if(left_inx <= last_inx && right_inx <= last_inx)
//         {
//             if(v[left_inx] >= v[right_inx] && v[left_inx] > v[cur_inx])
//             {
//                 swap(v[left_inx],v[cur_inx]);
//                 cur_inx=left_inx;
//             }
//             else if(v[right_inx] >= v[left_inx] && v[right_inx] > v[cur_inx])
//             {
//                 swap(v[right_inx],v[cur_inx]);
//                 cur_inx=right_inx;
//             }
//             else 
//             {
//                 break;
//             }
//         }
//         else if(left_inx <=last_inx)
//         {
//             if(v[left_inx] > v[cur_inx])
//             {
//                 swap(v[left_inx],v[cur_inx]);
//                 cur_inx=left_inx;
//             }
//             else 
//             {
//                 break;
//             }
//         }
//         else if(right_inx <=last_inx)
//         {
//             if(v[right_inx] >= v[left_inx] && v[right_inx] > v[cur_inx])
//             {
//                 swap(v[right_inx],v[cur_inx]);
//                 cur_inx=right_inx;
//             }
//             else 
//             {
//                 break;
//             }
//         }
//         else 
//         {
//             break;
//         }
//     }
    
// }
// int main()
// {
//     int n;
//     cin>>n;
//     vector<int>v;
//     for(int i=0;i<n;i++)
//     {
//         int x;
//         cin>>x;
//         insert_heap(v,x);
//     }
//     print_heap(v);
//     delete_heap(v);
//     print_heap(v);
//         delete_heap(v);
//             print_heap(v);


//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// void insert_heap(vector<int>&v,int x)
// {
//     v.push_back(x);
//     int cur_inx=v.size()-1;
//     while(cur_inx!=0)
//     {
//         int parent_inx=(cur_inx-1)/2;
//         if(v[parent_inx] < v[cur_inx])
//         {
//             swap(v[parent_inx],v[cur_inx]);
//             cur_inx=parent_inx;
//         }
//         else 
//         {
//             break;
//         }
//     }
// }
// void heap_print(vector<int>v)
// {
//     for(int val:v)
//     {
//         cout<<val<<" ";
//     }
//     cout<<endl;
// }
// void delete_max_heap(vector<int>&v)
// {
//     v[0]=v[v.size()-1];
//     v.pop_back();
//     int cur_inx=0;
//     while(true)
//     {
//         int left_inx=(cur_inx*2)+1;
//         int right_inx=(cur_inx*2)+2;
//         int last_inx=v.size()-1;

//         if(left_inx <= last_inx && right_inx <= last_inx)
//         {
//             //duitai ase
//             if(v[left_inx] >= v[right_inx] && v[left_inx] > v[cur_inx])
//             {
//                 swap(v[left_inx],v[cur_inx]);
//                 cur_inx=left_inx;
//             }
//             else if(v[right_inx] >= v[left_inx] && v[right_inx] > v[cur_inx])
//             {
//                 swap(v[right_inx],v[cur_inx]);
//                 cur_inx=right_inx;
//             }
//             else 
//             {
//                 break;
//             }
//         }
//         else if(left_inx <= last_inx)
//         {
//             // left ase
//             if(v[left_inx] > v[cur_inx])
//             {
//                 swap(v[left_inx],v[cur_inx]);
//                 cur_inx=left_inx;
//             }
//             else
//             {
//                 break;
//             }
//         }
//         else if(right_inx <= last_inx)
//         {
//             //right ase
//             if(v[right_inx] > v[cur_inx])
//             {
//                 swap(v[right_inx],v[cur_inx]);
//                 cur_inx=right_inx;
//             }
//             break;
//         }
//         else 
//         {
//             break;
//         }
//     }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     vector<int>v;
//     for(int i=0;i<n;i++)
//     {
//         int x;
//         cin>>x;
//         insert_heap(v,x);
//     }
//     heap_print(v);
//     delete_max_heap(v);
//     heap_print(v);
//     delete_max_heap(v);
//     heap_print(v);
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
void insert_heap(vector<int>&v,int x)
{
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
void print_heap(vector<int>v)
{
    for(int val:v)
    {
        cout<<val<<" ";
    }
    cout<<endl;
}
void delete_heap(vector<int>&v)
{
    v[0]=v[v.size()-1];
    int cur_inx=0;
    while(true)
    {
        int left_inx=(cur_inx*2)+1;
        int right_inx=(cur_inx*2)+2;
        int last_inx=v.size()-1;
        if(left_inx <= last_inx && right_inx <= last_inx)
        {
            if(v[left_inx] >= v[right_inx] && v[left_inx] > v[cur_inx])
            {
                swap(v[left_inx],v[cur_inx]);
                cur_inx=left_inx;
            }
            else if(v[right_inx] >= v[left_inx] && v[right_inx] > v[cur_inx])
            {
                swap(v[right_inx],v[cur_inx]);
                cur_inx=right_inx;
            }
            else
            {
                break;
            }
        }
        else if(left_inx <= last_inx)
        {
            if( v[left_inx] > v[cur_inx])
            {
                swap(v[left_inx],v[cur_inx]);
                cur_inx=left_inx;
            }
            else
            {
                break;
            }
            
        }
        else if(right_inx <= last_inx)
        {
            if(v[right_inx] > v[cur_inx])
            {
                swap(v[right_inx],v[cur_inx]);
                cur_inx=right_inx;
            }
            else
            {
                break;
            }
        }
        else 
        {
            break;
        }
    }
}
int main()
{
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        insert_heap(v,x);
    }
    print_heap(v);
    delete_heap(v);
    print_heap(v);
    delete_heap(v);
    print_heap(v);
    return 0;
}