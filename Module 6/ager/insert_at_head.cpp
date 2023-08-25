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
void insert_at_tail(Node *&head,int val)
{
    Node*newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        cout << endl
             << "Inserted at head" << endl
             << endl;
        return;
    }
    Node*tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
       // tmp ekhon last node e
    tmp->next=newNode;
}
void Print_linled_list(Node*head)
{
    cout<<"your Linked list:";
    Node*tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void insert_at_position(Node *head,int pos,int val)
{
    Node*newNode= new Node(val);
    Node*tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    cout << endl
             << "Inserted at head" << endl
             << endl;
}
void insert_at_head(Node*&head,int val)
{
    Node*newNode=new Node(val);
    newNode->next=head;
    head=newNode;
    cout << endl
         << "Inserted at head" << endl
         << endl;
}
int main()
{
    Node *head=NULL;
    while(true)
    {
        cout<<"Option 1:Insert at tail"<<endl;
        cout<<"Option 2:Print Linked list"<<endl;
        cout<<"Option 3: Insert at any Position"<<endl;
        cout<<"Option 4: Insert at head"<<endl;
        cout<<"Option 5:Terminate"<<endl;
        int op;
        cin>>op;
        if(op==1)
        {
            cout<<"Please enter value:";
            int val;
            cin>>val;
            insert_at_tail(head,val);
        }
        else if(op==2)
        {
            Print_linled_list(head);
        }
        else if(op==3)
        {
            int pos,val;
            cout<<"Enter Postion: ";
            cin>>pos;
            cout<<"Enter Value: ";
            cin>>val;
            if(pos==0)
            {
                insert_at_head(head,val);
            }
            else
            {
                insert_at_position(head,pos,val);
            }
        }
        else if(op==4)
        {
            int val;
            cout<<"Enter value:";
            cin>>val;
            insert_at_head(head,val);
        }
        else if(op==5)
        {
            break;
        }
    }

    return 0;
}