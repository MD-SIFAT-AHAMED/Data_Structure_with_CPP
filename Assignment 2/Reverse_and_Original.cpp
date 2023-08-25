#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node*next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void insert_tail(Node*&head,Node*&tail,int val)
{
    Node*newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
    }
    tail->next=newNode;
    tail=newNode;
}
void reverse_order(Node*x)
{
    if(x==NULL) return;
    reverse_order(x->next);
    cout<<x->val<<" ";
}
void original_order(Node*p)
{
    if(p==NULL) return;
    cout<<p->val<<" ";
    original_order(p->next);
}
int main()
{
    Node*head=NULL;
    Node*tail=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1) break;
       insert_tail(head,tail,val);
    }
    reverse_order(head);
    cout<<endl;
    original_order(head);
    return 0;
}