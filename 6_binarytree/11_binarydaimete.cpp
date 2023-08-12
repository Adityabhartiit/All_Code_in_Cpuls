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

  int calcDimeter(node* root,int* height){
    if(root==NULL){
        *height=0;
        return 0;
    }
    int lh=0,rh=0;

    //int currDaimeter = lHeight +rHeight +1;
    int lDiameter=calcDimeter(root->left,&lh);
    int rDiameter=calcDimeter(root->right,&rh);
  int currDiameter=lh+rh+1;
  *height=max(lh,rh)+1;
  return max(currDiameter,max(lDiameter,rDiameter));
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
cout<<calcDimeter(root,&height)<<endl;
  }
  