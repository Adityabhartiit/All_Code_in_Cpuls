#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *left, *right;
    node(int val){
        data = val;
        left=NULL;
        right=NULL;
    }
};
node* insertBST(node *root,int val){
  if(root==NULL){
    return new node(val);
  }
  if(val < root-> data){
    root->left = insertBST(root->left,val);
}
else {
    root->right=insertBST(root->right,val);
}
return root;

}
node* searchInBSt(node* root, int key){
    if(root == NULL){
        return NULL;
    }
    if(root->data == key){
        return root;
    }
    if(root->data > key)
    {
        return searchInBSt(root->left,key);
    }
    return searchInBSt(root->right,key);
}





void inorder(node *root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}
int main(){
    node *root = NULL;
    root= insertBST(root,5);
    insertBST(root,1);
    insertBST(root,3);
    insertBST(root,4);
    insertBST(root,2);
    insertBST(root,7);
    inorder(root);
    cout<<endl;
    if(searchInBSt(root,5)){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }



}