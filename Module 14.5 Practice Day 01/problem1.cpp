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
            if(sz==0) return true;
            else return false;
        }
};
int main()
{
    myStack q1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        q1.push(x);
    }
    myStack q2;
    int n1;
    cin>>n1;
    for(int i=0;i<n1;i++)
    {
        int x1;
        cin>>x1;
        q2.push(x1);
    }
    bool flag=true;
    while(!q1.empty() && !q2.empty())
    {
        if(q1.size()!=q2.size())
        {
            flag=false;
            break;
        }
        else if(q1.top()!=q2.top())
        {
            flag=false;
            break;
        }
        else
        {
            q1.pop();
            q2.pop();
            continue;
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