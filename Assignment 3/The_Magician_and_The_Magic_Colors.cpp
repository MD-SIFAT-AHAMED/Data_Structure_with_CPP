// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int test;
//     cin>>test;
//     while(test--)
//     {
//         stack<char>st;
//         int n;
//         cin>>n;
//         char x;
//         for(int i=0;i<n;i++)
//         {
//             cin>>x;
//             if(st.empty())
//             {
//                 st.push(x);
//             }
//             else
//             {
//                 if((st.top()=='R' && x=='B') || (st.top()=='B' && x=='R'))
//                 {
//                     st.pop();
//                     if(!st.empty() && st.top()=='P')
//                     {
//                         st.pop();
//                     }
//                     else
//                     {
//                         st.push('P');
//                     }
//                 }
//                  else if ((st.top() == 'R' && x == 'G') || (st.top() == 'G' && x == 'R'))
//                 {
//                     st.pop();
//                     if(!st.empty() && st.top()=='Y')
//                     {
//                         st.pop();
//                     }
//                     else
//                     {
//                         st.push('Y');
//                     }
//                 }
//                 else if ((st.top() == 'B' && x == 'G') || (st.top() == 'G' && x == 'B'))
//                 {
//                     st.pop();
//                     if(!st.empty() && st.top()=='C')
//                     {
//                         st.pop();
//                     }
//                     else
//                     {
//                         st.push('C');
//                     }
//                 }
//                 else
//                 {
//                     st.push(x);
//                 }
//             }
//         }    
//         while(!st.empty())
//         {
//             cout<<st.top();
//             st.pop();
//         }
//         cout<<endl;

//     }
//     return 0;
// }




 


// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int test;
//     cin>>test;
//     while (test--)
//     {
//         stack<char> st;
//         int n;
//         cin>>n;
//         char x;
//         for(int i=0;i<n;i++)
//         {
//             cin>>x;
//             if(st.empty())
//             {
//                 st.push(x);
//             }
//             else
//             {
//                 if((st.top()=='R' && x=='B') || (st.top()=='B'&& x=='R'))
//                 {
//                     st.pop();
//                     if(!st.empty() && st.top() == 'P')
//                     {
//                         st.pop();
//                     }
//                     else
//                     {
//                         st.push('P');
//                     }
//                 }
//                 else if ((st.top() =='R' && x=='G') || (st.top()=='G' && x=='R'))
//                 {
//                     st.pop();
//                     if (!st.empty() && st.top() == 'Y')
//                     {
//                         st.pop();
//                     }
//                     else
//                     {
//                         st.push('Y');
//                     }
//                 }
//                 else if ((st.top()=='B' && x =='G') || (st.top()=='G' && x =='B'))
//                 {
//                     st.pop();
//                     if (!st.empty() && st.top()=='C')
//                     {
//                         st.pop();
//                     }
//                     else
//                     {
//                         st.push('C');
//                     }
//                 }
//                 else
//                 {
//                     st.push(x);
//                 }
//             }
//         }
//         while(!st.empty())
//         {
//             cout << st.top();
//             st.pop();
//         }
//         cout << endl;
//     }
//     return 0;
// }






// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int test;
//     cin>>test;
//     while (test--)
//     {
//         queue<char> st;
//         queue<char> s1;
//         int n;
//         cin>>n;
//         char x;
//         for(int i=0;i<n;i++)
//         {
//             cin>>x;
//             if(st.empty())
//             {
//                 st.push(x);
//             }
//             else
//             {
//                 if((st.front()=='R' && x=='B') || (st.front()=='B'&& x=='R'))
//                 {
//                     st.pop();
//                     st.push('P');
//                 }
//                 else if ((st.front() =='R' && x=='G') || (st.front()=='G' && x=='R'))
//                 {
//                     st.pop();
//                     st.push('Y');
                    
//                 }
//                 else if ((st.front()=='B' && x =='G') || (st.front()=='G' && x =='B'))
//                 {
//                     st.pop();
//                     st.push('C');
                    
//                 }
//                 else
//                 {
//                     st.push(x);
//                 }
//             }
//             while(!st.empty())
//             {
//                 if(s1.empty())
//                 {
//                     s1.push(st.front());
//                     st.pop();
//                 }
//                 else if(st.front()==s1.front())
//                 {
//                     st.pop();
//                     s1.pop();
//                 }
//                 else
//                 {
//                     s1.push(st.front());
//                     st.pop();
//                 }
//             }
            
//         }
//         while(!s1.empty())
//         {
//             cout<<s1.front();
//             s1.pop();
//         }
//         cout << endl;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int test;
//     cin>>test;
//     while(test--)
//     {
//         char a;
//         cin>>a;
//         for(int i=0;i<a;i++)
//         {

//         }
//     }
//     return 0;
// }








// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int test;
//     cin>>test;
//     while(test--)
//     {
//         stack<char>st;
//         int n;
//         cin>>n;
//         string d;
        
//             cin>>d;
//             for(char x:d)
//             {
//                 if(st.empty())
//             {
//                 st.push(x);
//             }
//             else
//             {
//                 if((st.top()=='R' && x=='B') || (st.top()=='B' && x=='R'))
//                 {
//                     st.pop();
//                     if(!st.empty() && st.top()=='P')
//                     {
//                         st.pop();
//                     }
//                     else
//                     {
//                         st.push('P');
//                     }
//                 }
//                  else if ((st.top() == 'R' && x == 'G') || (st.top() == 'G' && x == 'R'))
//                 {
//                     st.pop();
//                     if(!st.empty() && st.top()=='Y')
//                     {
//                         st.pop();
//                     }
//                     else
//                     {
//                         st.push('Y');
//                     }
//                 }
//                 else if ((st.top() == 'B' && x == 'G') || (st.top() == 'G' && x == 'B'))
//                 {
//                     st.pop();
//                     if(!st.empty() && st.top()=='C')
//                     {
//                         st.pop();
//                     }
//                     else
//                     {
//                         st.push('C');
//                     }
//                 }
//                 else
//                 {
//                     st.push(x);
//                 }
//             }
//             }
            
           
//         while(!st.empty())
//         {
//             cout<<st.top();
//             st.pop();
//         }
//         cout<<endl;

//     }
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        stack<char>st;
        stack<char>stt;
        int n;
        cin>>n;
        char ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        for(char a:ar)
        {
            if(st.empty())
            {
                st.push(a);
            }
            else if((st.top()=='R' && a=='B') || (st.top()=='B' && a=='R'))
            {
                st.pop();
                if(!st.empty() && st.top()=='P')
                {
                    st.pop();
                }
                else
                {
                    st.push('P');
                }
            }
            else if((st.top()=='R' && a=='G') || (st.top()=='G' && a=='R'))
            {
                st.pop();
                if(!st.empty() && st.top()=='Y')
                {
                    st.pop();
                }
                else
                {
                    st.push('Y');
                }
            }
            else if((st.top()=='B' && a=='G') || (st.top()=='G' && a=='B'))
            {
                st.pop();
                if(!st.empty() && st.top()=='C')
                {
                    st.pop();
                }
                else
                {
                    st.push('C');
                }
            }
            else if(a=='G' || a=='R' || a=='B')
            {
                if(st.top()==a)
                {
                    st.pop();
                }
                else
                {
                    st.push(a);
                }
            }
                
        }
        while(!st.empty())
        {
            
            int x=st.top();
            stt.push(x);
            st.pop();
            
        }
        while(!stt.empty())
        {
            cout<<stt.top();
            stt.pop();
        }
        cout<<endl;
    }
    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     stack<char> st;
//     stack<char> st1;
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++)
//     {
//         int n;
//         cin>>n;
        
//         char ar[n];
//         for(int i=0;i<n;i++)
//         {
//             cin>>ar[i];
//         }
//         // cout<<n<<endl;
//         for(char c : ar)
//         {
//             if(st.empty())
//             {
//                 st.push(c);
//             }
           
            
//             else if((st.top()=='R' && c=='B') || (st.top()=='B' && c=='R'))
//             {
//                 st.pop();
//                 if(!st.empty() && st.top()=='P')
//                 {
//                     st.pop();
//                 }
//                 else
//                 {
//                         st.push('P');
//                 }
//             }
//             else if((st.top()=='R' && c=='G') || (st.top()=='G' && c=='R'))
//             {
//                 st.pop();
//                 if(!st.empty() && st.top()=='Y')
//                 {

//                     st.pop();
//                 }
//                 else
//                 {
//                     st.push('Y');
//                 }
//                     // st.push('Y');
//             }
//             else if((st.top()=='B' && c=='G') || (st.top()=='G' && c=='B'))
//             {
//                 st.pop();
//                     // st.push('C');
//                 if(!st.empty() && st.top()=='C')
//                 {
//                         // st.push('C');
//                     st.pop();
//                 }
//                 else
//                 {
//                     st.push('C');
//                 }
//             }
//             else
//             {
//                 st.push(c);
//             }
     
//         }
//         while(!st.empty())
//         {
//             cout<<st.top();
//             st.pop();
//         }
//         cout<<endl;
//         while(!st.empty())
//         {
//             int a = st.top();
//             st1.push(a);
//             st.pop();
//         }
//         while(!st1.empty())
//         {
//             cout<<st1.top();
//             st1.pop();
//         }
        
//     }
//     return 0;
// }
