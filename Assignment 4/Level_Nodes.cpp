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
void print_level(Node*root,int ar)
{
    if(root==NULL) 
    {
        cout<<"Invalid"<<endl;
        return;
    }
    queue<pair<Node*,int>>q;
    q.push({root,0});
    bool valid= false;
    while(!q.empty())
    {
        pair<Node*,int> pr=q.front();
        Node* node=pr.first;
        int level=pr.second;
        q.pop();
        if(level==ar)
        {
            cout<<node->val<<" ";
            valid=true;
        }
        // if(level>ar || level<ar)
        // {
        //     cout<<"Invalid";
        //     return;
        // }
        if(node->left) q.push({node->left,level+1});
        if(node->right) q.push({node->right,level+1});
    }
    if (!valid)
    {
        cout<<"Invalid"<<endl;
    }
}
int main()
{
    Node*root=input_tree();
    int ar;
    cin>>ar;
    print_level(root,ar);
    return 0;
}