#include <bits/stdc++.h>
using namespace std;
  struct  node {
    int data;
    struct node* left;
    struct node* right;
    node(int val)
    {
        data = val;
         right = NULL;
    }
  };

 int depth(node* root){
       if(root==NULL) return 0;
       int lh = depth(root->left);
       int rh = depth(root->right);
       return max(lh,rh)+1;
    }
    bool isBalanced(node* root) {
        if(root==NULL) return true;
        if(isBalanced(root->left)==false) return false;
        if(isBalanced(root->right)==false) return false;
        int lh = depth(root->left);
        int rh = depth(root->right);
        if(abs(lh-rh)<=1) return true;
        else return false;
        
        
    }





  int main()
  {
    struct node* root = new node(1);
    root->left = new node(2);
    root->right=new node(3);
root->left->left =new node(4);
root->left->right =new node(5);
root->right->left =new node(6);
root->right->right =new node(7);
int height=0;
if(isBalanced(root)){
    cout<<"BALANCED TREE"<<endl;
}
else 
{
    cout<<"UNBALANCED TREE"<<endl;
}
cout<<"HELLO word";
return 0;

  }
  