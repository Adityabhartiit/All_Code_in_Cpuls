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
  void printsubtreenode(node *root,int k){
  if(root==NULL || k<0){
    return;
  }
  if(k==0){
    cout<<root->data<<" ";
    return;
  }
  printsubtreenode(root->left,k-1);
  printsubtreenode(root->right,k-1);
  }
  int printNode(node *root,node *target,int k){
    if(root == NULL){
        return -1;
    }
    if(root == target){
        printsubtreenode(root,k);
        return 0;
    }
    int dl= printsubtreenode(root->left,target,k);
     if(dl!=-1){
        if(dl+1==k){
            cout<<root->data<<" ";
        }
        else 
     {
        printsubtreenode(root->right,k-dl-2);
     }
     return 1+dl;
     }
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


  }
  