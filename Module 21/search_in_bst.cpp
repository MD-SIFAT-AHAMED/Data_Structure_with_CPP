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
//         this->left=NULL;
//         this->right=NULL;
//     }
// };
// Node* input_tree()
// {
//     int val;
//     cin>>val;
//     Node*root;
//     if(val==-1) root=NULL;
//     else root=new Node(val);
//     queue<Node*>q;
//     if(root)q.push(root);
//     while (!q.empty())
//     {
//         Node*pre=q.front();
//         q.pop();

//         int l,r;
//         cin>>l>>r;
//         Node*left,*right;
//         if(l==-1) left=NULL;
//         else left=new Node(l);
//         if(r==-1) right=NULL;
//         else right=new Node(r);
//         pre->left=left;
//         pre->right=right;

//         if(pre->left) q.push(pre->left);
//         if(pre->right) q.push(pre->right);
//     }
//     return root;
// }
// void print_tree(Node*root)
// {
//     queue<Node*>q;
//     q.push(root);
//     while(!q.empty())
//     {
//         Node*pre=q.front();
//         q.pop();
//         cout<<pre->val<<" ";
//         if(pre->left)q.push(pre->left);
//         if(pre->right)q.push(pre->right);
//     }
// }
// bool search(Node*root,int x)
// {   if(root==NULL) return false;
//     if(root->val==x) return true;
//     if(root->val>x)
//     {
//         return search(root->left,x);
//     }
//     else 
//     {
//         return search(root->right,x);
//     }
// }
// int main()
// {
//     Node* root=input_tree();
//     print_tree(root);
//     if(search(root,42))
//     {
//         cout<<"Yes,Found"<<endl;
//     }
//     else 
//     {
//         cout<<"No,Not Found"<<endl;
//     }
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
Node* input_tree()
{
    int val;
    cin>>val;
    Node*root;
    if(val==-1) root=NULL;
    else root=new Node(val);
    queue<Node*>q;
    if(root) q.push(root);
    while(!q.empty())
    {
        Node*pre=q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        Node*left,*right;
        if(l==-1) left=NULL;
        else left=new Node(l);
        if(r==-1) right=NULL;
        else right=new Node(r);
        pre->left=left;
        pre->right=right;
        if(pre->left) q.push(pre->left);
        if(pre->right) q.push(pre->right);
    }
    return root;

}
void print_tree(Node*root)
{
    
    queue<Node*>q;
    q.push(root);
    while (!q.empty())
    {
        Node*pre=q.front();
        q.pop();

        cout<<pre->val<<" ";
        if(pre->left) q.push(pre->left);
        if(pre->right) q.push(pre->right);
    }
    cout<<endl;
}
bool search(Node*root,int val)
{
    if(root==NULL) return false;
    if(root->val==val) return true;
    else if(root->val > val)
    {
        return search(root->left,val);
    }
    else
    {
        return search(root->right,val);
    }
}
int main()
{
    int val;
    cin>>val;
    Node*root=input_tree();
    print_tree(root);
    if(search(root,val))
    {
        cout<<"YES-> Found"<<endl;
    }
    else
    {
        cout<<"NO->Not Found"<<endl;
    }
    return 0;
}