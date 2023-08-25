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
int size(Node *head)
{
    Node*tmp=head;
    int count=0;
    while(tmp!=NULL)
    {
        count++;
        tmp=tmp->next;
    }
    return count;
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
    Node*head1=NULL;
    Node*tail1=NULL;
    int val1;
    while(true)
    {
        cin>>val1;
        if(val1==-1) break;
        insert_tail(head1,tail1,val1);
    }
   
    int size1=size(head);
    int size2=size(head1);
    Node*tmp=head;
    Node*tmpp=head1;
    int flag=1;
    while (tmp!=NULL && tmpp!=NULL)
    {
        if(size(head)!=size(head1))
        {
            flag=0;
            break;
        }
        else if (tmp->val != tmpp->val)
        {
            flag=0;
            break;
        }
        tmp=tmp->next;
        tmpp=tmpp->next;
    }

    if(flag==1) 
    {
        cout<<"YES"<<endl;
    } 
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}

