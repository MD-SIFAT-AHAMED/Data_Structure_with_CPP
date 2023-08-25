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
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
void Cycle_Detceted(Node*head)
{
    Node*slow=head;
    Node*fast=head;
    bool flag=false;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            flag=true;
            break;
        }
    }
    if(flag==true)
    {
        cout<<"Cycle Detected!";
    }
    else
    {
        cout<<"No Cycle ";
    }
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
    tail->next=head->next;
    Cycle_Detceted(head);
    return 0;
}