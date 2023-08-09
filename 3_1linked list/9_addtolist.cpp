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
 int length(node *head){
    int l=0;
    node* temp=head;
    while (temp!=NULL)
    {
        l++;
        temp=temp->next;
    }
    return l;
    
 } 
node* kappend(node* &head,int k)
{
   node* newhead;
   node* newtail;
   node* tail=head; 
   int l=length(head);
   k=k%l;
   int count=1;
   while(tail->next!=NULL)
   {
    if(count==l-k)
    {
        newtail=tail;
    }
    if(count==l-k+1)
    {
        newhead=tail; 
    }
    tail=tail->next;
    count++;
   }
   newtail->next=NULL;
   tail->next=head;
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
int main(){

node* head=NULL;
insertAtTial(head,1);
insertAtTial(head,2);
insertAtTial(head,3);
insertAtTial(head,4);
insertAtTial(head,5);
insertAtTial(head,6);
display(head);
node* newhead=kappend(head,3);
display(newhead);
}