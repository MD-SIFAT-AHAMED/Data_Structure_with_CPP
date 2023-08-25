#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    vector<int> ar(a);
    for(int i=0;i<a;i++)
    {
        cin>>ar[i];
    }
    int b;
    cin>>b;
    vector <int> ar2(b);
    for(int i=0;i<b;i++)
    {
        cin>>ar2[i];
    }
    int dex;
    cin>>dex;
    for(int i=0;i<b;i++)
    {
        ar.insert(ar.begin() + dex + i,ar2[i]);
    } 
    for(int i=0;i<a+b;i++)
    {
        cout<<ar[i]<<" ";
    }  
    
    return 0;
} 



//ar.insert(ar.begin() + dex, ar2.begin(), ar2.end());


// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
//     int N;
//     cin >> N;

//     vector<int> A(N);
//     for (int i = 0; i < N; i++)
//     {
//         cin >> A[i];
//     }

//     int M;
//     cin >> M;

//     vector<int> B(M);
//     for (int i = 0; i < M; i++)
//     {
//         cin >> B[i];
//     }

//     int X;
//     cin >> X;

//     // Insert B into A at index X
//     for (int i = 0; i < M; i++)
//     {
//         A.insert(A.begin() + X + i, B[i]);
//     }

//     // Output the final array A
//     for (int num : A)
//     {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }