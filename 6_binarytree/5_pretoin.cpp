#include <iostream>
using namespace std;
  struct  node {
    int data;
    struct node* left;
    struct node* right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
  };
  int search(int inorder[],int start,int end,int curr)
  {
    for(int i=start;i<=end;i++)
    {
      if(inorder[i]==curr)
      {
        return i;
      }
    }
    return -1;
  }
  node* buildTREE(int preorder[],int inorder[],int start,int end)
  {
    static int idx =0;
    if(start > end)
    {
      return NULL;
    }
    int  val = preorder[idx];
    idx++;
    node* node = new node(curr);
    if(start == end)
    {
      return node;
    }
    int pos = search(inorder, start,end,curr);
    node->left = buildTREE(preorder, inorder,start,pos-1);
    node->right = buildTREE(preorder,inorder,pos+1,end);
    return node;
  }
  void inorder(node* root)
  {
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
  }
  int main()
  {
    int preorder[] = { 1,2,4,3,5};
    int inorder[]={4,2,1,5,3};

node* root= buildTREE(preorder,inorder,0,4);
inorder(root);

return 0;
  }
  