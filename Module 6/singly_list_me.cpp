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
void insert_at_tail(Node*&head,int val)
{
    Node*newNode=new Node(val);
    if(head==NULL)
    {
        cout<<endl;
        head=newNode;
        cout<<"Inserted Head"<<endl;
        cout<<endl;
        return;
    }
    Node*tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newNode;
}
void print_linked_list(Node*head)
{
    cout<<endl;
    Node*tmp=head;
    cout<<"Your Linked List: ";
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl<<endl;
}
void insert_any_positon(Node*head,int pos,int val)
{
    cout<<endl;
    Node*newNode=new Node(val);
    Node*tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
        if(tmp==NULL)
        {
            cout<<endl<<"Invalide Index!"<<endl<<endl;
            return;
        }
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    cout<<"Inserted Position:"<<pos<<endl<<endl;
}
void insert_at_head(Node*&head,int val)
{
    Node*newNode=new Node(val);
    newNode->next=head;
    head=newNode;
}
void deleteNode_any_position(Node*head,int pos)
{
    Node*tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
        if(tmp==NULL)
        {
            cout<<endl<<"Invalide Index!"<<endl<<endl;
            return;
        }
    }
    if(tmp->next==NULL)
    {
        cout<<endl<<"Invalide Index!"<<endl<<endl;
        return;
    }
    Node*deleteNode=tmp->next;
    tmp->next=tmp->next->next;
    delete deleteNode;
}
void delete_from_head(Node*&head)
{
   Node*deleteNode=head;
   head=head->next;
   delete deleteNode;
}
int main()
{
    Node*head=NULL;
    while(true)
    {
        int op;
        cout<<"Option 1: Insert at Tail"<<endl;
        cout<<"Option 2: Print Linked list"<<endl;
        cout<<"Option 3: Insert Any Position"<<endl;
        cout<<"Option 4: Insert Head"<<endl;
        cout<<"Option 5: Delete Any Position"<<endl;
        cout<<"Option 6: Delete Head"<<endl;
        cout<<"Option 7: Terminate"<<endl;
        cin>>op;
        if(op==1)
        {
            int val;
            cout<<"Please Enter Value: ";
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
            cout<<"Please Enter Position: ";
            cin>>pos;
            cout<<"Please Enter Value: ";
            cin>>val;
            if(pos==0)
            {
                insert_at_head(head,val);
            }
            else
            {
                insert_any_positon(head,pos,val);
            }

        }
        else if(op==4)
        {
            int val;
            cout<<"Please Enter Value: ";
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
                delete_from_head(head);
            }
            else
            {
                deleteNode_any_position(head,pos);
            }
        }
        else if(op==6)
        {
            delete_from_head(head);
        }
        else if(op==7)
        {
            break;
        }
    }
    return 0;
}