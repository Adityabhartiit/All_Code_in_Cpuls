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
bool cycle(node* &head)
{
    node* slow =head; 
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)
        {
            return true;

        }
    }
}
void makecycle(node* &head, int pos )
{
    node* temp=head;
    node* startNode;
    int count=1;
    while(temp->next!=NULL)
    {
        if(count==pos)
        {
            startNode=temp;

        }
        temp=temp->next;
        count++;
    }
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
makecycle(head,3);
display(head);
cout<<cycle(head)<<endl;
}