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
node* reverse(node* &head,int k){
     node* prevptr=NULL;
     node*currptr=head;
     node* nextptr;
     int count =0;
     while(currptr!=NULL && count <k){
        nextptr=currptr->next;
        currptr->next=prevptr; 
        prevptr=currptr;
        currptr=nextptr;
        count++;
     }
     if(nextptr!=NULL)
     {
        head->next= reverse(nextptr,k); 
     }
     return prevptr;
}
int main(){

node* head=NULL;
insertAtTial(head,1);
insertAtTial(head,2);
insertAtTial(head,3);
insertAtTial(head,4);
insertAtTial(head,5);
insertAtTial(head,6 );
display(head);
int k=2;
node* newhead = reverse(head,k);
display(newhead);
}