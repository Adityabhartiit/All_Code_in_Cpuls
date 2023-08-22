#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left,*right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
bool checkBST(node* root1, node* root2){
    if(root1==NULL && root2 == NULL){
        return true;
    }
    else if(root1 == NULL|| root2 == NULL){
        return false;

    }
    else {
        bool cond1=root1->data == root2->data;
        bool cond2 = checkBST(root1->right , root2->right);
         bool cond3 = checkBST(root1->left , root2->left);

if(cond1 && cond2 && cond3){
    return true;
}
return false;

    }
}
int main(){
    node* root = new node(2);
    root->left = new node(1);
    root->right= new node(3);
      node* root1 = new node(2);
    root1->left = new node(1);
    root1->right= new node(4);
    if(checkBST(root,root1)){
        cout<<"BSTs are identical"<<endl;
    }
    else{
        cout<<"BSTs are not identical"<<endl;
    }

}