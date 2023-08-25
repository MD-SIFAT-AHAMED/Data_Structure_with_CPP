// #include<bits/stdc++.h>
// using namespace std;
// class Node
// {
//     public:
//         int val;
//         Node*next;
//         Node*prev;
//     Node(int val)
//     {
//         this->val=val;
//         this->next=NULL;
//         this->prev=NULL;
//     }
// };
// class myStack
// {
//     public:
//         Node*head=NULL;
//         Node*tail=NULL;
//         int sz=0;
//         void push(int val)
//         {
//             sz++;
//             Node*newNode=new Node(val);
//             if(head==NULL)
//             {
//                 head=newNode;
//                 tail=newNode;
//                 return;
//             }
//             tail->next=newNode;
//             newNode->prev=tail;
//             tail=tail->next;
//         }
//         void pop()
//         {
//             sz--;
//             Node*deleteNode=tail;
//             tail=tail->prev;
//             if(tail==NULL)
//             {
//                 head=NULL;
//             }
//             else 
//             {
//                 tail->next=NULL;
//             }
//         }
//         int top()
//         {
//             return tail->val;
//         }
//         int size()
//         {
//             return sz;
//         }
//         bool empty()
//         {
//             if(sz==0)
//             {
//                 return true;
//             }
//             else
//             {
//                 return false;
//             }
//         }
// };
// class myQueue
// {
//     public:
//         Node*head=NULL;
//         Node*tail=NULL;
//         int sz=0;
//         void push(int val)
//         {
//             sz++;
//             Node*newNode=new Node(val);
//             if(head==NULL)
//             {
//                 head=newNode;
//                 tail=newNode;
//                 return;
//             }
//             tail->next=newNode;
//             newNode->prev=tail;
//             tail=tail->next;
//         }
//         void pop()
//         {
//             sz--;
//             Node *deleteNode = head;
//             head = head->next;
//             if (head == NULL)
//             {
//                 tail = NULL;
//                 delete deleteNode;
//                 return;
//             }
//             head->prev = NULL;
//             delete deleteNode;
//         }

//         int front()
//         {
//             return head->val;
//         }
//         int size()
//         {
//             return sz;
//         }
//         bool empty()
//         {
//             if(sz==0) return true;
//             return false;
//         }
// };
// int main()
// {
//     myStack st;
//     int n,n1;
//     cin>>n>>n1;
//     for(int i=0;i<n;i++)
//     {
//         int x;
//         cin>>x;
//         st.push(x);
//     }
//     myQueue q;
//     for(int i=0;i<n1;i++)
//     {
//         int x;
//         cin>>x;
//         q.push(x);
//     }
//     bool flag=true;
//     while(!st.empty() && !q.empty())
//     {
//         if(st.size()!=q.size())
//         {
//             flag=false;
//             break;
//         }
//         else if(st.top()!=q.front())
//         {
//             flag=false;
//             break;
//         }
//         else
//         {
//             st.pop();
//             q.pop();
//             continue;
//         }
//     }
//     if(flag==true)
//     {
//         cout<<"YES"<<endl;
//     }
//     else
//     {
//         cout<<"NO"<<endl;
//     }
//     return 0;
// }




#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node*next;
        Node*prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
class myStack
{
    public:
        Node*head=NULL;
        Node*tail=NULL;
        int sz=0;
        void push(int val)
        {
            sz++;
            Node*newNode=new Node(val);
            if(head==NULL)
            {
                head=newNode;
                tail=newNode;
                return;
            }
            tail->next=newNode;
            newNode->prev=tail;
            tail=tail->next;
        }
        void pop()
        {
            sz--;
            Node*deleteNode=tail;
            tail=tail->prev;
            if(tail==NULL)
            {
                head=NULL;
            }
            else 
            {
                tail->next=NULL;
            }
        }
        int top()
        {
            return tail->val;
        }
        int size()
        {
            return sz;
        }
        bool empty()
        {
            if(sz==0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};
class myQueue
{
    public:
        Node*head=NULL;
        Node*tail=NULL;
        int sz=0;
        void push(int val)
        {
            sz++;
            Node*newNode=new Node(val);
            if(head==NULL)
            {
                head=newNode;
                tail=newNode;
                return;
            }
            tail->next=newNode;
            newNode->prev=tail;
            tail=tail->next;
        }
        void pop()
        {
            sz--;
            Node *deleteNode = head;
            head = head->next;
            if (head == NULL)
            {
                tail = NULL;
                delete deleteNode;
                return;
            }
            head->prev = NULL;
            delete deleteNode;
        }

        int front()
        {
            return head->val;
        }
        int size()
        {
            return sz;
        }
        bool empty()
        {
            if(sz==0) return true;
            return false;
        }
};
int main()
{
    myStack st;
    int n,n1;
    cin>>n>>n1;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    myQueue q;
    for(int i=0;i<n1;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    list<int>hel;
    list<int>hell;
    bool flag=true;
    while(!st.empty()) 
    {
        int x=st.top();
        st.pop();
        hel.push_front(x); 
    }
    while (!q.empty())
    {
        int xx=q.front();
        q.pop();
        hell.push_front(xx);
    }
    
    for(auto it=hel.begin();it!=hel.end();it++)
    {
        if(hel.size() != hell.size())
        {
            flag=false;
            break;
        }  
        else if(*hel.begin() != *hell.begin())
        {
            flag=false;
            break;
        }
    }
    if(flag==true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}