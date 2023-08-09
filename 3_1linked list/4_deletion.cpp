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
void deleteAtHead(node* &head)
{
    node* todelete=head;
    head=head->next;
     delete todelete;
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
{    if(head==NULL)
{
    return;
}
if(head->next==NULL)
{
    deleteAtHead(head);
}
    node* temp=head;
    while(temp!=NULL)
    {
   cout<<temp->data<<" ";
   temp=temp->next;
    }
    cout<<endl;
}
    void deletion(node* &head,int val){
        node* temp=head;
        while(temp->next->data!=val){
            temp=temp->next; 
        }
        node* todelete=temp->next;
        temp->next=temp->next->next;
        delete todelete;
    }
 
int main(){

node* head=NULL;
insertAtTial(head,1);
insertAtTial(head,2);
insertAtTial(head,3);
insertAtTial(head,4);
display(head);
deletion(head,3);
display(head);
}