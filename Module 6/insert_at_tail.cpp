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
    Node* newNode=new Node(val);

    if(head==NULL)
    {
        head=newNode;
        return;
    }

    Node* tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    //last node . Mane Tail a ase
    tmp->next=newNode;
}
void print_linked_list(Node*head)
{
    cout<<"Your linked list3: ";
    Node*tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
int main()
{
    Node *head=NULL;
    while(true)
    {
        cout<<"option 1: insert at tail"<<endl;
        cout<<"option 2: print linked list"<<endl;
        cout<<"option 3: Terminate"<<endl;
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
            break;
        }
    }
    return 0;
}