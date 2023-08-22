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
node* ArraytoBST(int arr[],int start,int end){
    if(start>end){

        return NULL;
    }
    int mid=(start+end)/2;
    node* root=new node(arr[mid]);
    root->left=ArraytoBST(arr,start,mid-1);
    root->right=ArraytoBST(arr,mid+1,end); 
    return root;
}


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
void preorder(node *root){
    if(root==NULL){
        return;
    }
      
    preorder(root->left);
  cout<<root->data<<" ";
    preorder(root->right);

}
int main(){
   int arr[]={10,20,30,40,50};
   node* root=ArraytoBST(arr,0,4);
    preorder(root);
    cout<<endl;



}