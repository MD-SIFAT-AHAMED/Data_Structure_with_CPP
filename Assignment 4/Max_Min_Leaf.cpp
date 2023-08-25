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
    if(root)
    {
        q.push(root);
    }
    while(!q.empty())
    {
        Node*parents=q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node*myleft;
        Node*myright;
        if(l==-1) myleft=NULL;
        else myleft=new Node(l);
        if(r==-1) myright=NULL;
        else myright=new Node(r);

        parents->left=myleft;
        parents->right=myright;

        if(parents->left) q.push(parents->left);
        if(parents->right) q.push(parents->right);
    }
    return root;
}
void per_order(Node*root,vector<int>&v)
{
    
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL)
    {
        v.push_back(root->val);
    }
    per_order(root->left,v);
    per_order(root->right,v);
}
int main()
{
    Node*root=input_tree();
    vector<int>v;
    per_order(root,v);
    int mn=INT_MAX;
    int mx=INT_MIN;
    for(int i =0;i<v.size();i++)
    {
        mn=min(mn,v[i]);
        mx=max(mx,v[i]);
    }
    cout<<mx<<" "<<mn;
    return 0;
}