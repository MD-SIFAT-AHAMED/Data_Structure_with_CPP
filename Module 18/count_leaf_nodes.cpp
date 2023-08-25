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
//         this->right=NULL;
//         this->left=NULL;
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
//     if(root)
//     {
//         q.push(root);
//     }
//     while(!q.empty())
//     {
//         Node*parents=q.front();
//         q.pop();

//         int l,r;
//         cin>>l>>r;
//         Node*myleft;
//         Node*myright;
//         if(l==-1) myleft=NULL;
//         else myleft=new Node(l);
//         if(r==-1) myright=NULL;
//         else myright=new Node(r);

//         parents->left=myleft;
//         parents->right=myright;

//         if(parents->left) q.push(parents->left);
//         if(parents->right) q.push(parents->right);
//     }
//     return root;
// }
// int count_leaf(Node*root)
// {
//     if(root==NULL) return 0;
//     if(root->left==NULL && root->right==NULL)
//     {
//         return 1;
//     }
//     else
//     {
//         int l=count_leaf(root->left);
//         int r=count_leaf(root->right);
//         return l+r;
//     }
    
// }
// int main()
// {
//     Node*root=input_tree();
//     cout<<count_leaf(root);
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
int count_leaf(Node*root)
{
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL)
    {
        return 1;
    }
    else 
    {
        int l=count_leaf(root->left);
        int r=count_leaf(root->right);
        return l+r;
    }
}
int main()
{
    Node*root=input_tree();
    cout<<count_leaf(root);
    return 0;
}