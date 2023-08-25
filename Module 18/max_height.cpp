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
        this->right=NULL;
        this->left=NULL;
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
int max_hight(Node*root)
{
    if(root==NULL) return 0;

    int l=max_hight(root->left);
    int r=max_hight(root->right);
    return max(l,r)+1; 
}
int main()
{
    Node*root=input_tree();
    cout<<max_hight(root);
    return 0;
}