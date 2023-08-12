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
  int calcHeight(node* root){
    if(root==NULL){
        return 0;
    }
    return max(calcHeight(root->left),calcHeight(root->right))+1;
  }
  int calcDimeter(node* root){
    if(root==NULL){
        return 0;
    }
    int lHeight=calcHeight(root->left);
    int rHeight=calcHeight(root->right);
    int currDaimeter = lHeight +rHeight +1;
    int lDiameter=calcDimeter(root->left);
    int rDiameter=calcDimeter(root->right);
  return max(currDaimeter,max(lDiameter,rDiameter));
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

cout<<calcDimeter(root)<<endl;
  }
  