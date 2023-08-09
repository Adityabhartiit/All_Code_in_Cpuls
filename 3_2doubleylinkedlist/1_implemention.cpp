#include <iostream>
using namespace std;
class node{
    public:
    int data ;
    node* next;
    node* prev;

    node(int val)
    {
        data = val; 
        next=NULL;
        prev=NULL;
    }
};
void insertAtHead(node* &head, int val)
{
    node* n= new node(val);
    n->next=head;
    if(head!=NULL)
    {
        head->prev=n;
    }
    head=n;
}
void insertAtTial(node* &head,int val)
{ if(head==NULL)
{
    insertAtHead(head,val);
    return;
}
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
int main(){  

node* head=NULL;
insertAtTial(head,1);
insertAtTial(head,2);
insertAtTial(head,3);
insertAtTial(head,4);
display(head);
insertAtHead(head,5);
display(head);
}