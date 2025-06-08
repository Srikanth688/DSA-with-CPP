#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }

};
static int idx=-1;
Node* buildtree(vector<int>v)
{
    idx++;
    if(v[idx]==-1)
    {
        return NULL;
    }
    Node* root=new Node(v[idx]);
    root->left=buildtree(v);
    root->right=buildtree(v);
    return root;
}
int height(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int left=height(root->left);
    int right=height(root->right);
    return max(left,right)+1;
}
int main()
{
    vector<int>v={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root=buildtree(v);
    cout<<height(root)<<endl;
    return 0;


}