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
int main()
{
    Node*root=input_tree();
    vector<int>v;
    queue<Node*>q;
    if(root) q.push(root);
    while(!q.empty())
    {
        Node*pos=q.front();
        q.pop();

        v.push_back(pos->val);   
        if(pos->right) q.push(pos->right);
        if(pos->left) q.push(pos->left);
    }
    reverse(v.begin(),v.end());
    for(int i =0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}