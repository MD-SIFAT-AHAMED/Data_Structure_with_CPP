// #include<bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     string val;
//     Node*next;
//     Node*prev;
//     Node(string val)
//     {
//         this->val=val;
//         this->next=NULL;
//         this->prev=NULL;
//     }
// };
// void insert_at_tail(Node*&head,Node*&tail,string val)
// {
//     Node*newNode=new Node(val);
//     if(tail==NULL)
//     {
//         head=newNode;
//         tail=newNode;
//         return;
//     }
//     tail->next=newNode;
//     newNode->prev=tail;
//     tail=tail->next;
// }
// int main()
// {
//     Node*head=NULL;
//     Node*tail=NULL;
//     string val;
//     while(true)
//     {
//         cin>>val;
//         if(val=="end") break;
//         insert_at_tail(head,tail,val);
//     }
//     int q;
//     cin>>q;
//     Node* cur=head;
//     while(q--)
//     {
//         string value;
//         cin>>value;
//         if(value=="visit")
//         {
//             string add;
//             cin>>add;
//             Node*tmp=head;
//             while(tmp!=NULL)
//             {
//                 if(tmp->val==add) break;
//                 tmp=tmp->next;
//             }
//             if(tmp!=NULL)
//             {
//                 cur=tmp;
//                 cout<<tmp->val<<endl;
//             }
//             else
//             {
//                 cout<<"Not Available"<<endl;
//             }
//         }
//         else if(value=="next") 
//         {
//             if(cur->next != NULL)
//             {
//                 cur=cur->next;
//                 cout<<cur->val<<endl;
//             } 
//             else 
//             {
//                 cout<<"Not Available"<<endl;
//             }   
//         }
//         else if(value=="prev") 
//         {
//             if(cur->prev != NULL)
//             {
//                 cur=cur->prev;
//                 cout<<cur->val<<endl;
//             } 
//             else 
//             {
//                 cout<<"Not Available"<<endl;
//             }    
//         }
//     }
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        string val;
        Node* next;
        Node* prev;
        Node(string val)
        {
            this->val=val;
            this->next=NULL;
            this->prev=NULL;
        }
};
void insert_at_tail(Node* &head,Node* &tail,string val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    string val;
    while(true)
    {
        cin>>val;
        if(val == "end")
        {
            break;
        }
        else
        {
            insert_at_tail(head,tail,val);
        }
    }
    Node* tmp = head;
    int q;
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        string q;
        cin>>q;
        if(q == "visit")
        {
            string add;
            cin>>add;
            Node*tmp1=head;
            while(tmp1!=NULL)
            {
                if(tmp1->val==add) break;
                tmp1=tmp1->next;
            }
            if(tmp1!=NULL)
            {
                tmp=tmp1;
                cout<<tmp->val<<endl;
            }
            else
            {
                cout<<"Not Available"<<endl;
            }     
        }
        else if(q == "next")
        {
            if( tmp != NULL && tmp->next != NULL)
            {
                tmp = tmp->next;
                cout<<tmp->val<<endl;
            }
            else
            {
                cout<<"Not Available"<<endl;
            }
        }
        else if(q == "prev")
        {
            if( tmp->prev != NULL)
            {
                tmp = tmp->prev;
                cout<<tmp->val<<endl;
            }
            else
            {
                cout<<"Not Available"<<endl;
            }
        }
    }
    return 0;
}

