#include <iostream>
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
  int countnodes(node* root){
    if(root==NULL){
        return 0;

    }
    return countnodes(root->left)+countnodes(root->right)+1;
  }
   int sumnodes(node* root){
    if(root==NULL){
        return 0;

    }
    return sumnodes(root->left)+sumnodes(root->right)+root->data;
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
cout<<"NO OF NODES\n"<<countnodes(root)<<endl;
cout<<"SUM OF NODES\n"<<sumnodes(root)<<endl;

  }
  