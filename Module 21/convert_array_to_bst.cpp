// #include<bits/stdc++.h>
// using namespace std;
// class Node
// {
//     public:
//         int val;
//         Node*left;
//         Node*right;
//     Node(int val)
//     {
//         this->val=val;
//         Node*left=NULL;
//         Node*right=NULL;
//     }
// };
// Node*convert(int ar[],int n,int l,int r)
// {
//     if(l>r) return NULL;
//     int mid=(l+r)/2;
//     Node* root=new Node(ar[mid]);
//     Node*leftroot=convert(ar,n,l,mid-1);
//     Node*rightroot=convert(ar,n,mid+1,r);
//     root->left=leftroot;
//     root->right=rightroot;
//     retrun root;
// }
// void levle_order(Node*root)
// {
//     queue<Node*>q;
//     q.push(root);
//     while(!q.empty())
//     {
//         Node*pre=q.front();
//         q.pop();

//         cout<<pre->val<<" ";
//         if(pre->left) q.push(pre->left);
//         if(pre->right) q.push(pre->right);

//     }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int ar[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>ar[i];
//     }
//     Node*root=convert(ar,n,0,n-1);
//     levle_order(root);
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node*left;
        Node*right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* convert(int ar[],int n,int l,int r)
{
    if(l>r) return NULL;
    int mid=(l+r)/2;
    Node*root=new Node(ar[mid]);
    Node*leftroot=convert(ar,n,l,mid-1);
    Node*rigthroot=convert(ar,n,mid+1,r);
    root->left=leftroot;
    root->right=rigthroot;
    return root;
}
void print_tree(Node*root)
{
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        Node*pre=q.front();
        q.pop();
        cout<<pre->val<<" ";
        if(pre->left) q.push(pre->left);
        if(pre->right) q.push(pre->right);
    }
}
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    Node*root=convert(ar,n,0,n-1);
    print_tree(root);
    return 0;
}