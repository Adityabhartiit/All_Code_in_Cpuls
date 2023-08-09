#include <iostream>
using namespace std;
class node{
    public:
    int data ;
    node* next;
    node(int val)
    {
        data = val;
        next=NULL;
    }
};
node* reverseRecusive(node* &head){
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    node* newhead= reverseRecusive(head->next);
    head->next->next=head;
    head->next=NULL;

    return newhead;
}
void insertAtTial(node* &head,int val)
{
    node*n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
   cout<<temp->data<<" ";
   temp=temp->next;
    }
    cout<<endl;
}
// node* reverse(node* &head){
//      node* prevptr=NULL;
//      node* currptr=head;  
//      node* nextptr;
//      while(currptr!=NULL){
//         nextptr=currptr->next;
//         currptr->next=prevptr; 
//         prevptr=currptr;
//         currptr=nextptr;
//      }
//      return prevptr;
// }
int main(){

node* head=NULL;
insertAtTial(head,1);
insertAtTial(head,2);
insertAtTial(head,3);
insertAtTial(head,4);
display(head);
node* newhead = reverseRecusive(head);
display(newhead);
} 