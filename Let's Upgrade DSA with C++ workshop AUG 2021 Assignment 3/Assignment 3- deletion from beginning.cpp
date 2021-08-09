#include <iostream>
#include<stdlib.h>
using namespace std;

struct Node
{
    int Data;
    Node *next;
};
.
Node *create(int Data)
{
    Node *nptr=new(Node);
    nptr->Data=Data;
    nptr->next=NULL;
    return nptr;
}

Node *insert_beg(Node *head, int x)
{
    Node *pt=create(x);
    if(head==NULL)
    {
        head=pt;
        return head;
    }
    pt->next=head;
    head= pt;
    return head;
}
Node *Delete_from_beginning(Node *head)
{
    Node *newhead=NULL;
    if(head==NULL)
    {
        cout<<"Nothing to Delete. The list is already empty.";
        return head;
    }
    else
    {
        newhead=head->next;
        delete(head);
    }
    return newhead;
}

void display(Node *head)
{
    Node *temp=head;
    int count=0;
    if(temp==NULL)
    {
        cout<<"The list is empty.";
    }
    cout<<"The elements of the list are:"<<endl;
    while(temp!=NULL)
    {
        cout<<temp->Data<< " ";
        temp=temp->next;

    }
}
int main()
{
    Node *head, *temp;
    head= NULL;
    head=insert_beg(head,40);
    head=insert_beg(head,50);
    head=insert_beg(head,60);
    head=insert_beg(head,70);;
    head=insert_beg(head,80);
    display(head);
    cout<<"\n After deleting from beginning ";
    head=Delete_from_beginning(head);
    display(head);

    return 0;
}


