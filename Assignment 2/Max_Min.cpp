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
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // tmp ekhon last node e
    tmp->next = newNode;
}
void max_value(Node*head)
{
    int mx=INT_MIN;
    for(Node*i=head;i!=NULL;i=i->next)
    {
        mx=max(mx,i->val);
    }
    cout<<mx<<" ";
}
void min_value(Node*head)
{
    int mn=INT_MAX;
    for(Node*i=head;i!=NULL;i=i->next)
    {
        mn=min(mn,i->val);
    }
    cout<<mn;
}
int main()
{
    int val;
    Node *head = NULL;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, val);
    }
    max_value(head);
    min_value(head);
    return 0;
}