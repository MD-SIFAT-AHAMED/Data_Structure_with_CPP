#include <bits/stdc++.h>
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
void insert_at_head(Node*&head,Node*&tail,int val)
{

    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}
void insert_at_tail(Node*&head,Node*&tail,int val)
{
    Node*newNode=new Node(val);
    if(tail==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=tail->next;
}
void print_normal(Node *head)
{
    cout <<"L -> ";
    Node*tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void print_reverse(Node*tail)
{
    cout <<"R -> ";
    Node*tmp=tail;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}
int size(Node*head)
{
    int count=0;
    Node*tmp=head;
    while(tmp!=NULL)
    {
        count++;
        tmp=tmp->next;
    }
    return count;
}
void insert_at_any_position(Node*head,int pos,int val)
{
    Node*newNode=new Node(val);
    Node*tmp=head;
    for(int i=0;i<pos-1;i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    newNode->next->prev=newNode;
    newNode->prev=tmp;
}
int main()
{
    int x;
    cin>>x;
    Node*head=NULL;
    Node*tail=NULL;
    while(x--)
    {
        int pos,val;
        cin>>pos>>val;
        if(pos==0)
        {
            insert_at_head(head,tail,val);
        }
        else if(pos==size(head))
        {
            insert_at_tail(head,tail,val);
        }
        else if(size(head)<pos)
        {
            cout << "Invalid" << endl;
            continue;
        }
        else 
        {
            insert_at_any_position(head,pos,val);
        }
        print_normal(head);
        print_reverse(tail);
    }
   
    return 0;
}


