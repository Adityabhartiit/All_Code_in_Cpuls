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