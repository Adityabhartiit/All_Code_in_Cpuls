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
void zigzagTraversal(node* root){
    if(root==NULL){
        return;
    }
    stack<node*>currlevel;
    stack<node*>nextlevel;
    bool leftToright = true;
    currlevel.push(root);
    while(!currlevel.empty()){
        node* temp = currlevel.top();
        currlevel.pop();
        if(temp){
            cout<<temp->data<<" ";
        }
        if(leftToright){
            if(temp->left){
                nextlevel.push(temp->left);
            }
            if(temp->right){
                nextlevel.push(temp->right);
            }

        }
        else{
            if(temp->right){
                nextlevel.push(temp->right);
            }
            if(temp->left){
                nextlevel.push(temp->left);
            }
        }
    }

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

int main(){
    node *root = NULL;
    root= insertBST(root,5);
    insertBST(root,1);
    insertBST(root,3);
    insertBST(root,4);
    insertBST(root,2);
    insertBST(root,7);
zigzagTraversal(root);
    cout<<endl;



}