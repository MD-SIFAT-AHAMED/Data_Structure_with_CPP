void reverse(Node*&head,Node*cur)
{
    if(cur->next==NULL)
    {
        head=cur;
        return;
    }
    reverse(head,cur->next);
    cur->next->next=cur;
    cur->next=NULL;
}