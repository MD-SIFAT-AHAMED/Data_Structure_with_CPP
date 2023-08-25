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
void insert_at_tail(Node * &head,int val)
{
    cout<<endl;
    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        cout<<"Insert at head"<<endl;
        return;
    }

    Node* tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    //last node . Mane Tail a ase
    tmp->next=newNode;
    cout<<"Inserted at Tail";
    cout<<endl;
}
void print_linked_list(Node*head)
{
    cout<<endl;
    cout<<"Your linked list: ";
    Node*tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
    cout<<endl;
}
void insert_any_position(Node *head,int pos,int val)
{
    Node* newNode=new Node(val);
    Node*tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    cout<<"Inserted at Position"<<pos<<endl;
}
void insert_at_head(Node* &head,int val)
{
    Node* newNode=new Node(val);
    newNode->next=head;
    head=newNode;
    cout<<"Inserted head";
}
void delete_from_position(Node* head,int pos)
{
    Node*tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    Node* deleteNode=tmp->next;
    tmp->next=tmp->next->next;
    delete deleteNode;
}
void delete_head(Node* &head)
{
    Node*deleteNode=head;
    head=head->next;
    delete deleteNode;
    cout<<endl;
}
int main()
{
    Node *head=NULL;
    while(true)
    {
        cout<<"option 1: insert at tail"<<endl;
        cout<<"option 2: print linked list"<<endl;
        cout<<"option 3: insert at any position"<<endl;
        cout<<"option 4: insert at head"<<endl;
        cout<<"option 5: Delete from positon: "<<endl;
        cout<<"option 6: Delete from head: "<<endl;
        cout<<"option 7: Terminate"<<endl;
        int op;
        cin>>op;
        if(op==1)
        {
            cout<<"Please Enter value: ";
            int val;
            cin>>val;
            insert_at_tail(head,val);
        }
        else if(op==2)
        {
            print_linked_list(head);
        }
        else if(op==3)
        {
            int pos,val;
            cout<<"Please Enter position: ";
            cin>>pos;
            cout<<"Please Enter Value :";
            cin>>val;
            if(pos==0)
            {
                insert_at_head(head,val);
            }
            else
            {
                insert_any_position(head,pos,val);
            }
        }
        else if(op==4)
        {
            int val;
            cout<<"Please Enter value: ";
            cin>>val;
            insert_at_head(head,val);
        }
        else if(op==5)
        {
            int pos;
            cout<<"Please Enter Position: ";
            cin>>pos;
            if(pos==0)
            {
                delete_head(head);
            }
            else
            {
                delete_from_position(head,pos);
            }
           
        }
        else if(op==6)
        {
            delete_head(head);
        }
        else if(op==7)
        {
            break;
        }
    }
    return 0;
}