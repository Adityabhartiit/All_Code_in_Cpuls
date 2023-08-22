  #include <bits/stdc++.h>
  using namespace std;
  struct node{
    int data;
    node *left, *right;
    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
  };
  void calcPointers(node* root,node** first,node** mid, node** last , node** prev ){
    if(root == NULL){
        return ;
    }
    calcPointers(root->left,first,mid,last,prev);
    if(*prev && root->data < (*prev)->data){
    if(!*first){
        *first = *prev;
        *mid = root;

    }
    else 
{
    *last = root;
}
    }
    *prev = root;
    calcPointers(root->right,first,mid,last,prev);

  }
  void restoreBST(node* root){
    node* first,*mid,*last,*prev;
    first= NULL;
    mid=NULL;
    last = NULL;
    prev  =NULL;
    calcPointers(root,&first,&mid,&last,&prev);
    if(first && last){
        swap(&(first->data ))
    }
  }